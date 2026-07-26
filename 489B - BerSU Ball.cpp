#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    cin>>n;
    vector<int> boys(n);
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }
 
    cin>>m;
    vector<int> girls(m);
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int pair_count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(boys[i]-girls[j])<=1){
                pair_count++;
                boys[i]=-10;
                girls[j]=-10;
                break;
            }
        }
    }
    cout<<pair_count<<endl;
 
    return 0;
}