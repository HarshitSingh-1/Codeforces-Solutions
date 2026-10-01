#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the numbers : ");
    scanf("%d %d", &a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    while(a<10 && a<=b){
    if(a==1){
        printf("One\t");
    } else if(a==2){
        printf("Two\t");
    } else if(a==3){
        printf("Three\t");
    } else if(a==4){
        printf("Four\t");
    } else if(a==5){
        printf("Five\t");
    }  else if(a==6){
        printf("Six\t");
    }  else if(a==7){
        printf("Seven\t");
    }  else if(a==8){
        printf("Eight\t");
    }  else if(a==9){
        printf("Nine\t");
    }  a++;
    }
    while(a<=b && a>9){
        if(a%2==1){
        printf("Odd\t");
    }  else {
        printf("Even\t");
    } a++;
    }
    return 0;
}