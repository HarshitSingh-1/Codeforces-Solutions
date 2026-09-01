#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini =a[1]-a[0];
        for(int i=1;i<n;i++){
            mini = min(mini,a[i]-a[i-1]);
        }
        if(mini<0){
            cout<<0<<endl;
        }
        else{
            cout<<mini/2+1<<endl;
        }
    }
    return 0;
}