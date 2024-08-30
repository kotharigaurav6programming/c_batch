// program showing the concept of pointer to pointer
#include<stdio.h>
int main(){
    int a,*ptr,**ptr1;
        printf("Enter value of a : ");
        scanf("%d",&a);

        printf("value of a : %d\n",a);
        printf("address of a : %p\n",&a);

        ptr = &a;
        printf("address of ptr : %p\n",&ptr);
        printf("address which ptr holds : %p\n",ptr);
        printf("value at address which *ptr holds : %d\n",*ptr);

        ptr1 = &ptr;
        printf("address of ptr1 : %p\n",&ptr1);
        printf("address which ptr1 holds : %p\n",ptr1);
        printf("address which *ptr1 holds : %p\n",*ptr1);
        printf("value which **ptr1 holds : %d\n",**ptr1);

    return 0;
}
