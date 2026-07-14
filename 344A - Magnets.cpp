#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    int g=1;
    cin>>n;
    string a,b;
    cin>>a;
    for(int i=1;i<n;i++){
        cin>>b;
        if(a!=b){
            g++;
        }
        a=b;
    }
    cout<<g<<"\n";
 
    return 0;
}