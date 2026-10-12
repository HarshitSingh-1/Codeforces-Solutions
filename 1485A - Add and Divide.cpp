#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,mini=0,count=0,num=0;
        cin>>a>>b;
        if(b==1){
            b++;
            num++;
        }
        for(int i=b;i<10e9;i++){
            x=a;
            count=num;
            while(x!=0){
                x=x/i;
                count++;
            } 
            if(mini<count && mini!=0){
                break;
            } else if(mini==0) {
                mini=count; 
            } else mini=min(mini,count);
            num++;
        }
        cout<<mini<<endl;
    }
    return 0;
}