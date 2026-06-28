#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double l;
    cin>>n>>l;
    vector<double> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    double a=0;
    for(int i=1;i<n;i++){
        if(vec[i]-vec[i-1]>a){
            a=vec[i]-vec[i-1];
        }
    }
    double radius = a/2;
    double ans=max({vec[0],l-vec[n-1],radius});
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}