#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int k=0;
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+'){
            k++;
        }else{
            k--;
        }
    }
    cout<< k << endl;
 
    return 0;
}
