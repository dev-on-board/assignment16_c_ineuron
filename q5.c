//Write a program in C to find the sum of left diagonals of a matrix
#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    printf("enter the elements for array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(i+j==2){
            sum=sum+a[i][j];
           
           }
           b[i][j]=sum;
        }
    }
    printf("sumof the left diagonal matrix is : \n");
    printf("%d",sum);
}