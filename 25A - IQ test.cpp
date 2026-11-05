#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,odd=0,even=0,even_count=0;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]%2==0){
            even_count++;
            even=i+1;
        } else {
            odd=i+1;
        }
    }
    if(even_count>1){
        cout<<odd<<"\n";
    } else {
        cout<<even<<"\n";
    }
    return 0;
}