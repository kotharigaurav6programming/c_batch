// program showing the concept of call by value
#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping in swap : \na : %d\nb : %d\n",a,b);
}
int main(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("Before swapping : \na : %d\nb : %d\n",a,b);
    swap(a,b);
    printf("After swapping : \na : %d\nb : %d\n",a,b);

    return 0;
}
