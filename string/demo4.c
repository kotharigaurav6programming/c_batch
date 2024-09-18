// program showing the concept of string

#include<stdio.h>
int main(){
    char name[50];
    int len=0,count=0;

    printf("Enter name : ");
    scanf("%[^\n]s",name);

    while(name[len]!='\0'){
        if(name[len]!=32)
            count++;
        len++;
    }

    printf("\nname : %s\n",name);
    printf("\nlength : %d\n",count);    
}