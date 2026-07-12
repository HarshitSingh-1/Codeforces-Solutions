#include<bits/stdc++.h>
using namespace std;
 
string word(){
    
}
 
int main(){
    string s;
    cin>>s;
    int a=0;
 
    while(1){
        int k=0;
        int num=stoi(s);
        num++;
        s=to_string(num);
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(s[i]!=s[j]){
                    k++;
                }
            }
        }
        if(k==6){
            break;
        }
        
    }
    cout<<s<<endl;
 
    return 0;
}