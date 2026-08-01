#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    int num_notes=n/100;
    num_notes+=(n%100)/20;
    num_notes+=(n%20)/10;
    num_notes+=(n%10)/5;
    num_notes+=n%5;

    cout<<num_notes<<endl;
   
    return 0;
}