//Write a program in C to find the transpose of a given matrix.
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
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           b[i][j]=a[j][i];
        }
    }
    printf("transpose of the matrix is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}