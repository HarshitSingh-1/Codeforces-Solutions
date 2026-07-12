#include<bits/stdc++.h>
using namespace std;
 
string word(){
    int x,y;
    cin>>x>>y;
    if(x%y==0){
        return "YES";
    } else {
        return "NO";
    }
}
 
int main(){
    int t;
    cin>>t;
    vector<string> vec(t);
    for(int i=0;i<t;i++){
        vec[i]=word();
    }
    for(int i=0;i<t;i++){
        cout<<vec[i]<<"\n";
    }
    return 0;
}