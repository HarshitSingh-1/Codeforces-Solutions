#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,n;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==1 && b==1 && c==1){
        n=3;
    }else if(a==1){
        n=(a+b)*c;
    } else if(b==1){
        if(a<c){
            n=(a+b)*c;
        } else {
            n=a*(b+c);
        }
    } else if(c==1){
        n=(c+b)*a;
    } else{
        n=a*b*c;
    }
    if(n<a+b+c){
        n=a+b+c;
    }
    cout<<n;
    return 0;
}