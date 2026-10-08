#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,count=0,y=0,a=0;
    cin>>n>>t;
    vector<int> vec(n+1),pfsum(n+1);
    vec[0]=0;
    pfsum[0]=vec[0];
    for(int i=1;i<=n;i++){
        cin>>vec[i];
        pfsum[i]=vec[i]+pfsum[i-1];
    }
    for(int i=0;i<=n;i++){
        if(pfsum[i]-pfsum[y]<=t){
            count=max(count,i-y);        
        } else {
            y++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}