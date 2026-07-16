#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string a,b;
    int x=1;
    int y=0;
    cin>>a;
    n--;
    while(n--){
        string c;
        cin>>c;
        if(c==a){
            x++;
        } else {
            b=c;
            y++;
        }
    }
    if(x>y){
        cout<<a<<"\n";
    } else {
        cout<<b<<"\n";
    }
    

    return 0;
}