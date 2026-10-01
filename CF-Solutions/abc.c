#include<stdio.h>

int main(){
    int r,c;
    printf("Enter the no. of row and coloumns\n");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",matrix[i][j]);
        }
    }
    int trace=0;
    for(int i=0;i<c;i++){
        trace+=matrix[i][i];
    }
    
    return 0;
}
