#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    string s;
    cin>>x;
    cin>>s;
    int k=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            k++;
        }
    }
    cout<<k;
    return 0;
}