#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=1;i<n;i++){
        if(s[i-1]>s[i]){
            cout<<"YES\n"<<i<<" "<<i+1<<"\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}