#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a;
        int b=k;
        int c=n/k;
        while(k<n){
            k=c*b;
            c++;
        }
        a=k/n;
        if(k%n!=0){
            a++;
        }
        cout<<a<<endl;
    }
 
    return 0;
}