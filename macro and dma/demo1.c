// program showing the concept of macro | object &  function like macro

#include<stdio.h>
#define PI 3.14 // object like macro
#define area(r) PI*r*r // function like macro 
int main(){
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);

    printf("Value of PI : %.2f\n",PI);
    printf("Area : %.2f\n",area(r));
}