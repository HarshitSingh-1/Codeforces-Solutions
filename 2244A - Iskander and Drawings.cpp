#include<bits/stdc++.h>
using namespace std;
 
int maxt(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            a++;
        } else {
            a=0;
        }
        b=max(a,b);
    }
    return (b+1)/2;
}
 
int main(){
    int t;
    cin>>t;
    vector<int> vec(t);
    for(int i=0;i<t;i++){
        vec[i]=maxt();
    }
    for(int i=0;i<t;i++){
        cout<<vec[i]<<"\n";
    }
    return 0;
}