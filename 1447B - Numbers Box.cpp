#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,count0=0,neg=0,mini=100,sum=0;
        cin>>n>>m;
        vector<vector<int>> vec(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>vec[i][j];
                if(vec[i][j]<0) neg++;
                if(vec[i][j]==0) count0++;
                mini=min(mini,abs(vec[i][j]));
                sum+=abs(vec[i][j]);
            }
        }
        if(neg%2==1 && count0==0){
            sum-=2*mini;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}