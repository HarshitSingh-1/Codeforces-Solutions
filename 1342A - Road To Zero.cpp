#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        long long ans = min(x,y)*min(b,2*a)+ abs(x-y)*a;
        cout<<ans<<endl;
    }
    return 0;
}