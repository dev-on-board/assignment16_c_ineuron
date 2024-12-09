//Write a program in C to find the sum of right diagonals of a matrix.

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
    int sum;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(a[i]==a[j]){
            sum=sum+a[i][j];
           
           }
           b[i][j]=sum;
        }
    }
    printf("sumof the right diagonal matrix is : \n");
    printf("%d",sum);
    
    

}