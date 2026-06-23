#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int r=0;
    while(n--){
        if(vec[n]>=vec[k-1] && vec[n]>0){
            r++;
        }
    }
    cout<< r;
    return 0;
}