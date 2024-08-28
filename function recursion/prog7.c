// program showing the concept of functions
// with argument with return type

#include<stdio.h>
#include"myfile.h"
void main(){
    int num,x;
    printf("Enter number : ");
    scanf("%d",&num);
    x = factorial(num); // function calling // with argument
    printf("factorial : %d\n",x);
}

