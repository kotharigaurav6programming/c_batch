// program showing the concept of pointer
#include<stdio.h>
int main(){
    int a,*b;
        printf("Enter value of a : ");
        scanf("%d",&a);

        printf("value of a : %d\n",a);
        b=&a;
        printf("value of b : %p\n",b);
        printf("value of *b : %d\n",*b);
        
    return 0;
}
