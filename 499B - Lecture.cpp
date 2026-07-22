#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,m;
    cin>>n>>m;
    string ar[m][2];
    string ar1[n];
    for(int i=0;i<m;i++){
        cin>>ar[i][0]>>ar[i][1];
        string s=ar[i][0];
        if(ar[i][0].size()>ar[i][1].size()){
            ar[i][0]=ar[i][1];
            ar[i][1]=s;
        }
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s==ar[j][0] || s==ar[j][1]){
                ar1[i]=ar[j][0];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar1[i]<<endl;
    }
 
    return 0;
}