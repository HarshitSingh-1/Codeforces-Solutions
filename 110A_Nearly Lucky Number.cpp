#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int r=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='4'|| n[i]=='7'){
            r++;
        }
    }
    if(r==4 || r==7){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}