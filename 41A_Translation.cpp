#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    s3=s1;
    for(int i=0;i<s1.size();i++){
        s3[i]=s1[s1.size()-i-1];
    }
    if(s2==s3){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}