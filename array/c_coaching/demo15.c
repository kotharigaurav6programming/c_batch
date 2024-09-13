// program showing the concept of array
// pointer to an array

#include<stdio.h>
int main(){
    int i,size,arr[20],*ptr;
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;

    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}