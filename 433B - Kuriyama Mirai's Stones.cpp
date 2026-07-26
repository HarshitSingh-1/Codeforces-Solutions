#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    cin>>n;
    vector<int> vec1(n+1);
    vector<long long> pf1(n+1);
    vector<long long> pf2(n+1);
    for(int i=1;i<=n;i++){
        cin>>vec1[i];
        pf1[i]=pf1[i-1]+vec1[i];
    }
    sort(vec1.begin(),vec1.end());
    for(int i=1;i<=n;i++){
        pf2[i]=pf2[i-1]+vec1[i];
    }
    cin>>m;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<pf1[r]-pf1[l-1]<<endl;
        } else {
            cout<<pf2[r]-pf2[l-1]<<endl;
        }
    }
    return 0;
}