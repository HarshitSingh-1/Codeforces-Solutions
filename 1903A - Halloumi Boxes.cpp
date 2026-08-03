#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        vector<int> vec(n);
        cin>>vec[0];
        for(int i=1;i<n;i++){
            cin>>vec[i];
            if(vec[i-1]>vec[i]){
                c=1;
            }
        }
        if(c==1 && k==1){
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
 
    return 0;
}