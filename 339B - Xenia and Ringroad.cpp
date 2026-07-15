#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int> vec(m);
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
 
    long long t=vec[0]-1;
 
    for(int i=1;i<m;i++){
        if(vec[i]>=vec[i-1]){
            t+=vec[i]-vec[i-1];
        } else {
            t+=n+vec[i]-vec[i-1];
        }
    }
    cout<<t<<"\n";
    
    return 0;
}