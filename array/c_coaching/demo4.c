// program showing the concept of array
// find out the sum of all the elements of an array

#include<stdio.h>
int main(){
    int sum=0,i,size,arr[20];
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        sum = sum + arr[i];
        printf("%d\t",arr[i]);
    }
    printf("\nsum : %d\n",sum);
    return 0;
}