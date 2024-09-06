// program showing the concept of array is palindrome or not

#include<stdio.h>
int main(){
    int temp,i,size,arr[20];
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]); 
    }
    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    for(i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i]){
            printf("Array is not palindrome");
            break;
        }
    }
    if(i==size/2)
        printf("Array is palindrome");

    return 0;
}