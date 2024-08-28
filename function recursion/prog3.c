// program showing the concept of functions
// no argument no return type

#include<stdio.h>
// function definition // no return type
void addition(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("addition : %d\n",a+b);
}

void main(){
    addition(); // function calling // no argument
}

