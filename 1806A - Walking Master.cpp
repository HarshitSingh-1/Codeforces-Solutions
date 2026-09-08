#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        if(d-c>=b-a && d>=b){
            while(d>b){
                b++;
                a++;
                count++;
            }
            count+=a-c;
            cout<<count<<endl;
        } else {
            cout<<"-1\n";
        }
        
    }
    return 0;
}