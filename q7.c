//Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main(){
    int a[3][3];
    printf("enter the elements for array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
              a[i][j]=0;
            }
        }
    }
    printf("lower triangular matrix is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}   