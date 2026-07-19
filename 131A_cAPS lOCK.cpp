#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=0;
    for(int i=1;i<s.size();i++){
        if(s[i]>=97){
            n=1;
            break;
        }
    }
    if(n==0){
        for(int i=0;i<s.size();i++){
           if(s[i]<97){
            s[i]+=32;
           } else {
            s[i]-=32;
           }
        }
    }
    cout<<s;
    return 0;
}