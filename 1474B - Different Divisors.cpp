#include<bits/stdc++.h>
using namespace std;
 
bool isprime (int x){
    bool prime=true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int d,x,a=1,b=1;
        cin>>d;
        a=1+d;
        while(1){
            if(isprime(a)){
                b=a+d;
                while(1){
                    if(isprime(b)){
                        break;
                    }
                    b++;
                }
            }
            if(b!=1) break;
            a++;
            b=1;
        }
        cout<<a*b<<endl;
        
    }
    return 0;
}