#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,h;
    cin>>n>>h;
    vector<int> vec(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>h){
            x+=2;
        } else {
            x++;
        }
    }
    cout<<x;
    return 0;
}