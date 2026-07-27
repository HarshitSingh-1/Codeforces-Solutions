#include <bits/stdc++.h>
using namespace std;
 
const int N=250000;
long long ar[N+1];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    for(int i=2;i<=N;i++){
        ar[i]=8ll*(i-1)*(i-1) + ar[i-1];
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ar[n/2+1]<<endl;
    }
    
    
    return 0;
}