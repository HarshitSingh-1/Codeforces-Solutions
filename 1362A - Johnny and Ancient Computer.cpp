#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
       long long a,b,c;
       cin>>a>>b;
       if(b>a) swap(a,b);
       if(a%b!=0){
        cout<<-1<<"\n";
        continue;
       }
       a/=b;
       b=0;
       while(a%2==0){
        a/=2;
        b++;
       }
       if(a>1){
        cout<<-1<<"\n";
       } else {
        if(b%3!=0) b+=3;
        b/=3;
        cout<<b<<"\n";
       }
 
    }
    return 0;
}