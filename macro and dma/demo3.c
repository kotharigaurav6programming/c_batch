// program showing the concept of macro |  function like macro

#include<stdio.h>
#define display(i,limit){while(i<=limit){printf("statement : %d\n",i);i++;}}
int main(){
    int j=1;
    display(j,5);
}