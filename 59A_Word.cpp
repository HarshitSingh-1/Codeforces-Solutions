#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<97){
            k++;
        }
    }
    if(k>s.size()/2){
        for(int i=0;i<s.size();i++){
            if(s[i]>96){
                s[i]-=32;
            }
        }
    } else {
        for(int i=0;i<s.size();i++){
            if(s[i]<97){
                s[i]+=32;
            }
        }
    }
    cout<< s;
    return 0;
}