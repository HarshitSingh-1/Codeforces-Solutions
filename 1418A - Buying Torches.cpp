#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long x,y,k,trade=0;
        cin>>x>>y>>k;
    
        trade=(k*(y+1)-1)/(x-1)+k;
        if((k*(y+1)-1)%(x-1)!=0) trade++;
        
        cout<<trade<<endl;
        
        
    }
    return 0;
}