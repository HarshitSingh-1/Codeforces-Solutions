#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int y=k;
        int x=k;
        vector<int> vec(n);
        
        if(k==4){
            int min1=0;
            int min2=0;
            int min3=0;
            int min4=0;
            for(int i=0;i<n;i++){
                cin>>vec[i];
                if(vec[i]%4==0){
                    min3++;
                } else if(vec[i]%4==3){
                    min4++;
                    min2++;
                } else if (vec[i]%2==0){
                    min1++;
                } else if (vec[i]%2==1){
                    min2++;
                }
            }
            if(min3>0 || min1>1){
                cout<<"0"<<"\n";
            } else if(min4>0) {
                cout<<"1"<<"\n";
            } else {
                cout<<2-min1<<"\n";
            }
        } else {
            for(int i=0;i<n;i++){
            cin>>vec[i];
            x=min(x,vec[i]%k);
            y=min(y,k-vec[i]%k);
            }
 
            if(x==0){
            cout<<x<<"\n";
            } else {
            cout<<y<<"\n";
            }
        }
        
    }
    return 0;
}
