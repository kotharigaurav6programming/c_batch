// program showing the concept of functions
// no argument no return type

#include<stdio.h>
// function declaration
void display();
int main(){
    printf("Before calling\n");
    // function calling
    display();
    display();
    display();
    printf("After calling\n");
    return 0;
}

// function definition
void display(){
    printf("\tdisplay method called\n");
}