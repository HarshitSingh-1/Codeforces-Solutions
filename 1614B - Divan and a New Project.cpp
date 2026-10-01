#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,T=0,x=2,pos=1,neg=-1;
        cin>>n;
        vector<pair<int,int>> vec(n);
        for(int i=1;i<=n;i++){
            vec[i-1].second=i;
            cin>>vec[i-1].first;
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            T+=vec[n-i-1].first*x;
            if(i%2!=0){
                x+=2;
                vec[n-i-1].first=pos;
                pos++;
            } else {
                vec[n-i-1].first=neg;
                neg--;
            }
        }
       
       sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
       });   
        cout<<T<<endl<<"0 ";
        for(int i=0;i<n;i++){
            cout<<vec[i].first<<" ";
        }
        cout<<endl;

    }
    return 0;
}