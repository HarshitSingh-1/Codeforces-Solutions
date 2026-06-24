#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    if(s1[0]>=97){
        s1[0]-=32;
    }
    cout<< s1;
    return 0;
}