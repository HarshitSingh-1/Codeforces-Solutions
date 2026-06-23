#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int k=0;
    for(int i=-2;i<3;i++){
       for(int j=-2;j<3;j++){
        cin>>arr[i+2][j+2];
        if(arr[i+2][j+2]==1){
            k=abs(i)+abs(j);
        }
       }
    }
    cout<< k<< endl;
    return 0;
}