#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    int a=0;
    int b=0;
    int c=0;

    for(int i=0;i<s1.size();i+=2){
        if(s1[i]=='1'){
            a++;
        } else if(s1[i]=='2'){
            b++;
        } else if(s1[i]=='3'){
            c++;
        }
    }
    for(int i=0;i<s1.size();i+=2){
        if(a>0){
            s1[i]='1';
            a--;
        } else if(b>0){
            s1[i]='2';
            b--;
        } else if(c>0){
            s1[i]='3';
            c--;
        }
    }
    cout<<s1;
    return 0;
}