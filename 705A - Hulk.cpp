#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<string> s={"hate ","love ","I ","that ","it"};
    for(int i=0;i<n-1;i++){
        cout<<s[2]<<s[i%2]<<s[3];
    }
    cout<<s[2]<<s[(n+1)%2]<<s[4];
 
    return 0;
}