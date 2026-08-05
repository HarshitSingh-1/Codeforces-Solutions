#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int eff=0,a;
        while(n--){
            cin>>a;
            eff-=a;
        }
        cout<<eff<<endl;
    }
    return 0;
    
}