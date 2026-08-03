#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,x,a=0,b,maxd=0;
        cin>>n>>x;
        while(n--){
            cin>>b;
            maxd=max(maxd,b-a);
            a=b;
        }
        maxd=max(maxd,(x-a)*2);
        cout<<maxd<<endl;
    }
 
    return 0;
}