// program showing the concept of multidimensional array

#include<stdio.h>
int main(){
    int i,j,k,arr[20][20][20],count=1;
    
        for(i=0;i<2;i++){ // no.of 2d matrix
            for(j=0;j<3;j++){  // no. of rows
                for(k=0;k<3;k++){ // no. of columns
                    arr[i][j][k]=count++;
                }
            } 
        }
        printf("\nResultant Array elements are : \n");
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                for(k=0;k<3;k++){
                    printf("%d\t",arr[i][j][k]);
                }
                printf("\n");
            } 
            printf("\n");
        }
       return 0;
}