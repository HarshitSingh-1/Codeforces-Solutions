#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0,z=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(x==0 && s[i]=='1'){
                x=i+1;
            }
            if(s[i]=='1'){
                y=i+1;
                z++;
            }
        }
        if(z==2){
            y=1;x=0;
        }
        cout<<y-x<<endl;
    }
}