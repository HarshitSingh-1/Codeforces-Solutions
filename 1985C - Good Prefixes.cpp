#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n+1);
        vector<int> mx(n+1);
        vector<long long> pf(n+1);
        long long count=0;
        for(int i=1;i<=n;i++){
            cin>>vec[i];
            pf[i]=pf[i-1]+vec[i];
            mx[i]=max(vec[i],mx[i-1]);
            if(2*mx[i]==pf[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}