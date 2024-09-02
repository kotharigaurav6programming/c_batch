// program showing the concept of array
// program to find out minimum element from an array

#include<stdio.h>
int main(){
    int min,i,size,arr[20];
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        if(min>arr[i])
            min=arr[i];
        printf("%d\t",arr[i]);
    }
    printf("\nMinimum element : %d\n",min);
    return 0;
}