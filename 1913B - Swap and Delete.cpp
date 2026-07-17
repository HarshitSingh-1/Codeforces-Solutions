#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                a++;
            } else {
                b++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(b==0){
                    break;
                }
                b--;
            } else {
                if(a==0){
                    break;
                }
                a--;
            }
        }
        cout<<a+b<<"\n";
    }
    
    return 0;
}