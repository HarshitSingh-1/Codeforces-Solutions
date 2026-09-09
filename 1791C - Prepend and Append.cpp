#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<char> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0,y,z;
        while(1){
            y=a[x]-'0';
            z=a[n-x-1]-'0';
            //cout<<x<<y<<z;
            if(y+z!=1) break;
            if(x>=n/2){
                break;
            }
            x++;   
        }
        cout<<n-2*x<<endl;
    }
    return 0;
}