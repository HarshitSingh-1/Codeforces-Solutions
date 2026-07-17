#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<"\n";
    } else {
        int a[]={6,8,4,2};
        cout<<a[n%4]<<"\n";
    }
    return 0;
}