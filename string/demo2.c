// program showing the concept of string

#include<stdio.h>
int main(){
    char name[50];
    printf("Enter name : ");
    scanf("%[^\n]s",name);

    printf("\nname : %s\n",name);
        
}