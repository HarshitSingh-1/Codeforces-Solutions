#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int ar[7];
    for(int i=0;i<7;i++){
        cin>>ar[i];
    }
    int sum=0;
    int a=0;
    while(sum<n){
        sum+=ar[a%7];
        a++;
    }
    if(a%7==0){
        a=7;
    } else {
        a=a%7;
    }
    cout<<a<<endl;
    
    return 0;
}