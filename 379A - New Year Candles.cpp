#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int a,b;
    cin>>a>>b;
    int t=a;
    int x;
    while(a>=b){
        x=a%b;
        t+=a/b;
        a=(a/b)+x;
    }
    cout<<t<<"\n";
    
    return 0;
}