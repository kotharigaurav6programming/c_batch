// program showing the concept of array

/*
#include<stdio.h>
int main(){
    int i,arr[] = {1,2,3,4,5};
    for(i=0;i<5;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    return 0;
}
*/

#include<stdio.h>
int main(){
    int i,size,arr[20];
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
    return 0;
}