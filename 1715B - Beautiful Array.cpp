#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s>=k*b && s<=(k*b +(k-1)*n)){
            vector<long long> vec(n);
            if(s<k*(b+1)){
                vec[0]=s;
            } else {
                vec[0]=k*(b+1)-1;
                s-=vec[0];
                for(int i=1;s!=0;i++){
                    vec[i]=min(k-1,s);
                    s-=vec[i];
                }
            }
            for(auto it : vec){
                cout<<it<<" ";
            }
            cout<<endl;
            
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}