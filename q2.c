//Write a program to calculate the product of two matrices each of order 3x3
#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("enter the elements for 1st array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements for 2nd array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           for(int k=0;k<3;k++){
             sum=sum+(a[i][k]*b[k][j]);
           }
           c[i][j]=sum;
           sum=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}