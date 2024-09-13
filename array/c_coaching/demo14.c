// program showing the concept of array
// array of pointer

#include<stdio.h>
int main(){
    int i,size,arr[20],*ptr[20];
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        ptr[i] = &arr[i];
    }
    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t%p\n",*ptr[i],ptr[i]);
    }
    return 0;
}