#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,h;
        cin>>n>>k;
        vector<pair<int,int>> vec(n);
        for(int i=0;i<n;i++){
            cin>>h;
            vec[i].first=h%k;
            if(vec[i].first==0){
                vec[i].first=k;
            }
            vec[i].second=i+1;
        }
        
        sort(vec.begin(),vec.end(),[](const auto &a, const auto &b){
            if(a.first!=b.first){
                return a.first>b.first;
            } else {
                return a.second<b.second;
                }
        });

        for(int i=0;i<n;i++){
            cout<<vec[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}