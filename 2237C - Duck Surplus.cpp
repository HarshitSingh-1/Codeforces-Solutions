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
        vector<long long> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n-1;i++){
            if(vec[i]>vec[i+1]){
                swap(vec[i],vec[i+1]);
                vec[i+1]+=vec[i];
            }
        }
        cout<<vec[n-1]<<endl;
    }
   
    return 0;
}