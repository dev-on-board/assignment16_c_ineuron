//Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main(){
    int a[3][3],count=0;
    printf("enter the elements for array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]>0)
              count++;
              printf("%d ",a[i][j]);
            }
            printf("\n");
    }
     if(count<(9/2)){
        printf("sparsh matrix ");
     }
     else {
        printf("dense matrix ");
     }   
}
    
