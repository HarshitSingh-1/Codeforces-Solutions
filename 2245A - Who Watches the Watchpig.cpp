#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a=0;
        if(2*k>n){
            cout<<"-1"<<"\n";
        } else {
            for(int i=0;i<k;i++){
                if(s[i]!='R'){
                    a++;
                }
                if(s[n-k+i]!='L'){
                    a++;
                }
            }
            cout<<a<<"\n";
        }
    }
    
    
    return 0;
}