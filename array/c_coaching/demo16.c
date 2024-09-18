// program showing the concept of array
// pointer to an array

#include<stdio.h>
int main(){
    int i,size,temp,arr[20],*ptr;
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0;i<size/2;i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+size-1-i);
        *(ptr+size-1-i) = temp;
    }

    printf("\nArray elements after reversing : \n");
    for(i=0;i<size;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}


