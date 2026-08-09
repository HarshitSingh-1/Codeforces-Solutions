#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,x,y,count=0;
        cin>>n>>x;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int mini=vec[0],maxi=vec[0];
        for(int i=1;i<n;i++){
            if(vec[i]>=(maxi-2*x) && vec[i]<=(mini+2*x)){
                mini=min(vec[i],mini);
                maxi=max(vec[i],maxi);
            } else {
                count++;
                mini=vec[i];
                maxi=vec[i];
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}