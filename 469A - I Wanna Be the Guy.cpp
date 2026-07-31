#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,p,q;
    cin>>n>>p;
    vector<int> vec(n);
 
    while(p--){
        int a;
        cin>>a;
        vec[a-1]++;
    }
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        vec[a-1]++;
    }
    sort(vec.begin(),vec.end());
    if(vec[0]==0){
        cout<<"Oh, my keyboard!\n";
    } else {
        cout<<"I become the guy.\n";
    }
 
   
    return 0;
}