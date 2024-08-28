// program showing the concept of functions
// with argument with return type

#include<stdio.h>
// function definition // with return type
int factorial(int terms){
    int fact=1,i;
    for(i=1;i<=terms;i++){
        fact=fact*i;
    }
    return fact;
}

void main(){
    int num,x;
    printf("Enter number : ");
    scanf("%d",&num);
    x = factorial(num); // function calling // with argument
    printf("factorial : %d\n",x);
}

