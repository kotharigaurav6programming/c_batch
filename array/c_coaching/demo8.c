// program showing the concept of binary search

#include<stdio.h>
int main(){
    int search,first,last,middle,i,size,arr[20];
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
    first = 0;
    last = size-1;
    middle = (first+last)/2;
    
    printf("Enter element to be search : ");
    scanf("%d",&search);

    while(first<=last){
        if(arr[middle]<search){
            first = middle+1;
        }
        else if(arr[middle]==search){
            printf("Element found at position %d",middle+1);
            break;
        }
        else{
            last = middle-1;
        }
        middle = (first+last)/2;
    }    
    if(first>last)
        printf("Element not found");
    return 0;
}