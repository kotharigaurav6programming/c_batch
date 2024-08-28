// program showing the concept of functions
// with argument no return type

#include<stdio.h>
// function definition // no return type
void fibonacci(int terms){
    int i,a=-1,b=1,c;
    for(i=1;i<=terms;i++){
        c = a+b;
        printf("%d\t",c);
            a=b;
            b=c;
    }
}

void main(){
    int terms;
    printf("Enter no. of terms : ");
    scanf("%d",&terms);
    fibonacci(terms); // function calling // with argument
}

