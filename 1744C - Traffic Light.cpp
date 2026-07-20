#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char s1;
        string s2;
        cin>>n>>s1;
        cin>>s2;
        s2+=s2;
        int sum=0;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(s2[i]==s1){
                b=i;
                a++;
                break;
            }
        }
        for(int i=b+1;i<2*n;i++){
            if(s2[i]=='g'){
                sum=max(sum,a);
                a=0;
            } else if(s2[i]==s1){
                a++;
            } else if(a>0){
                a++;
            }
        }
        if(s1=='g'){
            sum=0;
        }
        
        cout<<sum<<"\n";
        
    }
    return 0;
}