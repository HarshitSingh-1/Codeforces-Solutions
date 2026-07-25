#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    string s;
    cin>>s;
    vector<int> vec(26);
    for(int i=0;i<n;i++){
        if(s[i]>='a'){
            vec[s[i]-'a']++;
        } else {
            vec[s[i]-'A']++;
        }
    }
    sort(vec.begin(),vec.end());
    if(vec[0]>0){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    
 
    return 0;
}