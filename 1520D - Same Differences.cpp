#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long pair_count=0;
        map<long long,long long> m;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            m[a-i]++;
        }
        for(auto pr : m){
            if(pr.second>1){
                pair_count+=pr.second*(pr.second-1)/2;
            }
        }
        cout<<pair_count<<endl;
    }
 
    return 0;
}