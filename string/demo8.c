// program showing the concept of string convert string into lowercase

#include<stdio.h>
int i,len=0;    // global variables
char name[50];  // global variable   

void lowerCase(char name[]){
    for(i=0;i<len;i++){
        if(name[i]>=65 && name[i]<=90)
            name[i] = name[i]+32;
    }
    printf("String in lowercase : %s\n",name);
}
int main(){
    
    printf("Enter name : ");
    scanf("%[^\n]s",name);
    while(name[len]!='\0'){
        len++;
    }
    printf("\nname : %s\n",name);
    lowerCase(name);
    return 0;
}