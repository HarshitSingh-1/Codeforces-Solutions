#include<stdio.h>

int max(int a,int b,int c,int d){
    if(a<b){
        a=b;
    }
    if(a<c){
        a=c;
    }
    if(a<d){
        a=d;
    }
    return a;
}

int main(){

    int a,b,c,d;
    printf("Enter 4 numbers : ");
    scanf("%d %d %d %d",&a ,&b,&c,&d);
    printf("The largest number is = %d\n",max(a,b,c,d));
    return 0;
}
