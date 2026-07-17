#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1){
        cout<<"-1";
        } else {
            char s[n];
            for(int i=0;i<n-1;i++){
                s[i]='1';
                cout<<s[i];
            } 
            s[n-1]='0';
            cout<<s[n-1];
 
        }
    } else {
        while(n--){
            cout<<t;
        }
    }
    cout<<"\n";
    return 0;
}
