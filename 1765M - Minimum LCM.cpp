#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        } else {
            if(n==3 || n==5 || n==7){
                cout<<1<<" "<<n-1<<endl;
            } else {
                for(int i=3;i*i<=n;i++){
                    if(n%i==0){
                        k=n/i;
                        cout<<k<<" "<<k*(i-1)<<endl;
                        break;
                    }
                }
                if(k==0){
                    cout<<1<<" "<<n-1<<endl;
                }
            }
        }
    }
    return 0;
}