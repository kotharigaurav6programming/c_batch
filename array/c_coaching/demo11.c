// program showing the concept of 2d array(addition)

#include<stdio.h>
int main(){
    int i,j,r,c,arr1[20][20],arr2[20][20],arr3[20][20];
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

        printf("Enter first array elements : ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&arr1[i][j]);
            } 
        }
        printf("Enter second array elements : ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&arr2[i][j]);
            } 
        }
        printf("\nArray elements are : \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("\t%d",arr1[i][j]);
            } 
            printf("\n");
        }
        printf("\nArray elements are : \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("\t%d",arr2[i][j]);
            } 
            printf("\n");
        }
        printf("\nResultant Array elements are : \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                arr3[i][j] = arr1[i][j] + arr2[i][j];
                printf("\t%d",arr3[i][j]);
            } 
            printf("\n");
        }

       return 0;
}