#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,d,count=0,k=1;
    cin>>n>>d;
    int n2=n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end(),greater<long long>());
    for(int i=0;i<n;i++){
        if(vec[i]>d){
            count++;
            n2--;
        } else {
            k=d/vec[i]+1;
            if(k>n2){
                break;
            }
            if(k>n){
                break;
            } else {
                count++;
                n2-=k;
            }
        }
        
    }
    cout<<count<<endl;
    return 0;
}