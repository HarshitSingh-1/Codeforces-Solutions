#include<bits/stdc++.h>
using namespace std;
 
int main(){
    double n;
    cin>>n;
    double a=0;
    for(int i=0;i<n;i++){
        double b;
        cin>>b;
        a+=b;
    }
    double c=a/n;
    cout<<c<<"\n";
 
    return 0;
}