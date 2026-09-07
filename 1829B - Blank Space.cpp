#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int x=0,len=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                x++;
            } else {
                len=max(x,len);
                x=0;
            }
        }
        len=max(x,len);
        cout<<len<<endl;
    }
    return 0;
}