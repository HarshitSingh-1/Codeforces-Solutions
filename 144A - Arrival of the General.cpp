#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int max_no=vec[0],min_no=vec[n-1];
    int max_index=0,min_index=0;
    for(int i=1;i<n;i++){
        if(vec[i]>max_no){
            max_no=vec[i];
            max_index=i;
        }
        if(vec[n-i-1]<min_no){
            min_no=vec[n-i-1];
            min_index=i;
        }
    }
    
    int count = max_index + min_index;
    if(count>=n){
        count--;
    }
    cout<<count<<endl;
   
    return 0;
}