#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int k=0,maxi=0,x=0,y;
        for(int i=0;i<a.size();i++){
            
            for(int j=0;j<b.size();j++){
                k=i;
                y=j;
                while(a[k]==b[y] && k<a.size() && y<b.size()){
                    x++;
                    maxi=max(maxi,x);
                    k++;
                    y++;
                } x=0;
            }
        }
        cout<<a.size()+b.size()-2*maxi<<endl;

    }
    return 0;
}