#include<bits/stdc++.h>
using namespace std;
 
bool is_fair(long long x){
    long long y=x;
    int z;
    
    while(x>0){
        if(x%10==0){
            x/=10; 
            continue;
        }
        z=x%10;
        x/=10;
        if(y%z!=0){
            return false;
        }
        
    }
    
    return true;
}
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        while(1){
            if(is_fair(n)){
                break;
            }
            n++;
        }
        
        cout<<n<<"\n";
 
    }
    return 0;
}