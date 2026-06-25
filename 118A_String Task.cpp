#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s1;
    cin>>s1;
    vector<char> s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<97){
            s1[i]+=32;
        }
        if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u' && s1[i]!='y'){
            s2.push_back('.');
            s2.push_back(s1[i]);
        }
    }
    for(int i=0;i<s2.size();i++){
        cout<<s2[i];
    }
    return 0;
}