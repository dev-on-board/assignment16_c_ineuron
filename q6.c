//Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main(){
    int a[3][3];
    int sum1;
    int sum2;
    printf("enter the elements for array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        sum1=0;
        for(int j=0;j<3;j++){
            sum1=sum1+a[i][j];
            }
           printf("row %d - sum %d",i+1,sum1);
           printf("\n");
    }
    for(int i=0;i<3;i++){
        sum2=0;
        for(int j=0;j<3;j++){
            sum2=sum2+a[j][i];
            }
           printf("column %d - sum %d",i+1,sum2);
           printf("\n");
    }
}
    