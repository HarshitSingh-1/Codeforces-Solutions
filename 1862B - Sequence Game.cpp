#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    vector<int> seq1(n);
    vector<int> seq2;
    for (int i = 0; i < n; i++) {
        cin >> seq1[i];
    }
    for (int i = 1; i < n; i++) {
        seq2.push_back(seq1[i-1]);
       if(seq1[i-1]>seq1[i]){
           seq2.push_back(seq1[i]);
       }
    }
    seq2.push_back(seq1[n-1]);
    cout<<seq2.size()<<endl;
    for(int i=0;i<seq2.size();i++){
       cout<<seq2[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}