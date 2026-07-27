#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    if(m%n==0){
        int count=0;
        int x=m/n;
        while(x>1){
            if(x%2==0){
                x=x/2;
                count++;
            } else if(x%3==0){
                x=x/3;
                count++;
            } else {
                count=-1;
                break;
            }
        }
        cout<<count<<endl;
    } else {
        cout<<"-1"<<endl;
    }
    
    return 0;
}