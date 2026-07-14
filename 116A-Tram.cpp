#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first>>vec[i].second;
    }
 
    int k=0;
    int p=0;
    for(int i=0;i<n;i++){
        p=p-vec[i].first+vec[i].second;
        k=max(k,p);
    }
    cout<<k<<"\n";
    
 
    return 0;
}