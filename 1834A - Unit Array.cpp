#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        int a=0,b=0,sum=0,x=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
            if(vec[i]==1){
                a++;
            } else {
                b++;
            }
        }
        while(sum<0 || b%2!=0){
            b--;
            sum+=2;
            x++;
        }
        cout<<x<<endl;
        
    }
    return 0;
}