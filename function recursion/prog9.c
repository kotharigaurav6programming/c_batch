// program showing the concept of recursion

#include<stdio.h>
int power(int b,int e){
    if(e==0)
        return 1;
    else
        return b * power(b,e-1);
}
void main(){
    int b,e;
    printf("Enter base and exponent : ");
    scanf("%d%d",&b,&e);

    printf("Power : %d\n",power(b,e));
}


