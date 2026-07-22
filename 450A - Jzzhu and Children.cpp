#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> vec(n+2);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    int a=0;
    int ans;
    for(int i=1;i<n+2;i++){
        if(a==n-1){
            ans=i;
            break;
        } else if(vec[i]<1){
            a++;
        } else {
            vec[i]=vec[i]-m;
            a=0;
        }
        if(i==n){
            i=0;
        }
    }
    cout<<ans<<endl;
 
    return 0;
}