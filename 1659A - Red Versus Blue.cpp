#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int y=r/(b+1);
        if(r%(b+1)!=0){
            y++;
        }
        int x=y;
        for(int i=0;i<n;i++){
            while(x--){
                if(i<n && r>0){
                    cout<<"R";
                    i++;
                    r--;
                }
            }
            if(i<n && b>0){
                    cout<<"B";
                    i++;
                    b--;
                }
            x=r/(b+1);
            i--;
        }
        cout<<endl;
        
    }
    return 0;
}