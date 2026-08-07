#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int> vec(n+1);
        set<int> s1;
        for(int i=0;i<n;i++){
            s1.insert(s[i]);
            vec[i+1]=s1.size();
        }
        s1.clear();
        for(int i=0;i<n;i++){
            s1.insert(s[n-i-1]);
            vec[n-i-1]+=s1.size();
        }
        sort(vec.begin(),vec.end());
        
        cout<<vec[n]<<endl;
    }
    return 0;
}