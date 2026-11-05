#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        bool same=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(vec[i]==vec[j]){
                    same=true;
                    break;
                }
            }
            if(same){
                break;
            }
        }
        if(same){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}