#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int x=0;
    int k=s1.size();
    int i=0;
    while(i<k){
        if(s1[i]>=97){
            s1[i]=s1[i]-32;
        }
        if(s2[i]>=97){
            s2[i]=s2[i]-32;
        }
        if(s1[i]>s2[i]){
            x=1;
            break;
        } else if(s1[i]<s2[i]){
            x=-1;
            break;
        } else{i++;}
    }
    cout<< x;
    return 0;
}