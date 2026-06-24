#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int k=x/5;
    if(x%5!=0){
        k++;
    }
    cout<<k;
    return 0;
}