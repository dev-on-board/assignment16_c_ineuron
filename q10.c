//Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main(){
    int a[3][3],count=0;
    printf("enter the elements for array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum, maxOnes=0,rowWithMaxOnes=0;
    for(int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==1)
              sum++;
            }
            if(sum>maxOnes){
                maxOnes=sum;
                rowWithMaxOnes=i;
            }
            
    }
    printf("row %d has %d no of max 1s",rowWithMaxOnes+1,maxOnes);
    
}
    