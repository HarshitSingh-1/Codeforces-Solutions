#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> vec(3*10e5+1);
    vec[0]=0;
    for(int i=1;i<=3*10e5;i++){
        vec[i]=i xor vec[i-1];
    }
 
    int t;
    cin>>t;
 
    while(t--){
        int a,b,size=0;
        cin>>a>>b;
        if((vec[a-1] xor b)==0){
            size=a;
        } else if((vec[a-1] xor b)!=a){
            size=a+1;
        } else {
            size=a+2;
        }
        cout<<size<<"\n";
    }
    return 0;
}