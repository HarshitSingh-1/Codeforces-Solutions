#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,op=0,cl=0,count=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='(') op++;
            if(s[i]==')'){
                if(op==0)count++;
                if(op>0) op--;
                
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}