// program showing the concept of 2d array(multiplication)

#include<stdio.h>
int main(){
    int i,j,k,r1,c1,r2,c2,arr1[20][20],arr2[20][20],arr3[20][20];
    
    printf("Enter rows and columns of array 1: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns of array 2: ");
    scanf("%d%d",&r2,&c2);

    if(c1==r2){
        printf("Enter first array elements : ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&arr1[i][j]);
            } 
        }
        printf("Enter second array elements : ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&arr2[i][j]);
            } 
        }
        printf("\nFirst Array elements are : \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("\t%d",arr1[i][j]);
            } 
            printf("\n");
        }
        printf("\nSecond Array elements are : \n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("\t%d",arr2[i][j]);
            } 
            printf("\n");
        }
        // multiplication logic
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                arr3[i][j] = 0;
                for(k=0;k<c1;k++){
                    arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
                }
            }
        }

        printf("\nResultant Array elements are : \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("\t%d",arr3[i][j]);
            } 
            printf("\n");
        }
        }else{
            printf("Multiplication not possible");
        }
       return 0;
}