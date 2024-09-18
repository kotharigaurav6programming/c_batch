// program showing the concept of string

#include<stdio.h>
int main(){
    char name[50],temp;
    int i,len=0,count=0;

    printf("Enter name : ");
    scanf("%[^\n]s",name);

    while(name[len]!='\0'){
        if(name[len]!=32)
            count++;
        len++;
    }
    printf("\nname : %s\n",name);
    printf("\nlength : %d\n",count);    

    for(i=0;i<len/2;i++){
        temp = name[i];
        name[i] = name[len-1-i];
        name[len-1-i] = temp;
    }
    printf("\nreverse name : %s\n",name);
}