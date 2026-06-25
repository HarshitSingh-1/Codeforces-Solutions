#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x[n];
    int y[n];
    int z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int p=0;
    int q=0;
    int r=0;
    for(int i=0;i<n;i++){
        p+=x[i];
        q+=y[i];
        r+=z[i];
    }
    if(p==0 && q==0 && r==0){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}