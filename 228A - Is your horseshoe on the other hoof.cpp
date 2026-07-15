#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    vector<int> vec(4);
    cin>>vec[0]>>vec[1]>>vec[2]>>vec[3];
    unordered_set<int> set1(vec.begin(),vec.end());
    cout<<4-set1.size()<<"\n";
    return 0;
}