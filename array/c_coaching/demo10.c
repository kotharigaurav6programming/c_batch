// program showing the concept of 2d array

#include<stdio.h>
int main(){
    int i,j,r,c,arr[20][20],sum=0;
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

    if(r==c){
        printf("Enter array elements : ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            } 
        }
        printf("\nArray elements are : \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==j)
                    sum=sum+arr[i][j];
                printf("\t%d",arr[i][j]);
            } 
            printf("\n");
        }
        printf("\nsum : %d\n",sum);
    }else{
        printf("sum not possible");
    }
       return 0;
}