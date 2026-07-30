#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    long long sum =0;

    for(int i=1;i<n;i++){
        sum+=(n-i)*i;
    }
    sum+=n;

    cout<<sum<<endl;
   
    return 0;
}