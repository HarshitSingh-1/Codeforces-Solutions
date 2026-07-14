#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long a=0;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<"\n";
    } else{
        a=-(n/2+1);
        cout<<a<<"\n";
    }
    return 0;
}