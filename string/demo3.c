// program showing the concept of string

#include<stdio.h>
int main(){
    char name[50];
    int age;

    printf("Enter age : ");
    scanf("%d",&age);
    getchar();
    
    printf("Enter name : ");
    scanf("%[^\n]s",name);

    printf("\nname : %s\n",name);
    printf("\nage : %d\n",age);    
}