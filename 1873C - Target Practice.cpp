#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        char x;
        int sum=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>x;
                if(x=='X'){
                    sum+=min(min(i,11-i),min(j,11-j));
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
    
}