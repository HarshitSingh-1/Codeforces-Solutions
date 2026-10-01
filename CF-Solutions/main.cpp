#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        long long w,h,k;
        cin>>w>>h;
        cin>>k;
        vector<int> vec(k);
        for(int i=0;i<k;i++){
            cin>>vec[i];
        }
        long long maxi=(vec[k-1]-vec[0])*h;
        cin>>k;
        vector<int> vec1(k);
        for(int i=0;i<k;i++){
            cin>>vec1[i];
        }
        maxi=max(maxi,(vec1[k-1]-vec1[0])*h);
        cin>>k;
        vector<int> vec2(k);
        for(int i=0;i<k;i++){
            cin>>vec2[i];
        }
        maxi=max(maxi,(vec2[k-1]-vec2[0])*w);
        cin>>k;
        vector<int> vec3(k);
        for(int i=0;i<k;i++){
            cin>>vec3[i];
        }
        maxi=max(maxi,(vec3[k-1]-vec3[0])*w);
        cout<<maxi<<endl;
    }
    return 0;
}