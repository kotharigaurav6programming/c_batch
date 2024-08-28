// program showing the concept of functions
// no argument with return type

#include<stdio.h>
// function definition // with return type
int factorial(){
    int fact=1,num,i;
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

void main(){
    printf("Factorial : %d\n",factorial()); // function calling // no argument
}

