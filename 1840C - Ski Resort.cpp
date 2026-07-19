#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> vec1(n);
        vector<int> vec2;
        int a=0;
        long long days=0;
        for(int i=0;i<n;i++){
            cin>>vec1[i];
            if(vec1[i]<=q){
                a++;
            } else {
                if(a>=k){
                    vec2.push_back(a);
                }
                a=0;
            }
        }
        if(a>=k){
            vec2.push_back(a);
        }
        for(int i=0;i<vec2.size();i++){
            long long m= vec2[i]-k+1;
            days+=(m*(m+1))/2;
        }
        cout<<days<<endl;
    }
    return 0;
}