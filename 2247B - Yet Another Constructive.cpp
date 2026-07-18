#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO\n";
        } else {
            vector<int> vec(n,1);
            vec[0]=m-k+1;
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
        }
        cout<<"\n";
    }
    
    
    return 0;
}