#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    int opr=10e5,a;
    while(n--){
        cin>>a;
        opr=min(abs(a),opr);
    }
    cout<<opr<<endl;
 
    return 0;
    
}