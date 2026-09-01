#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k>1){
            if(x!=1){
                cout<<"YES\n"<<n<<endl;
                while(n--){
                    cout<<"1 ";
                }
                cout<<endl;
                
            } else if(k>2){
            if(n%2==0){
                cout<<"YES\n"<<n/2<<endl;
                while(n>0){
                    cout<<"2 ";
                    n-=2;
                }
                cout<<endl;
               
            } else {
                cout<<"YES\n"<<n/2<<endl;
                cout<<"3 ";
                n-=3;
                while(n>0){
                    cout<<"2 ";
                    n-=2;
                }
                cout<<endl;
               
            } 
        } else if(k==2 && n%2==0){
                cout<<"YES\n"<<n/2<<endl;
                while(n>0){
                    cout<<"2 ";
                    n-=2;
                }
                cout<<endl;
             } else {
                cout<<"NO"<<endl;
               
            }
        } else {
                cout<<"NO"<<endl;
                
            }
           
        
    }
    return 0;
}