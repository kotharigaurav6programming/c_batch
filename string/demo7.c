// program showing the concept of string convert string into uppercase

#include<stdio.h>
int i,len=0;    // global variables
char name[50];  // global variable   

void upperCase(char name[]){
    for(i=0;i<len;i++){
        if(name[i]>=97 && name[i]<=122)
            name[i] = name[i]-32;
    }
    printf("String in uppercase : %s\n",name);
}
int main(){
    
    printf("Enter name : ");
    scanf("%[^\n]s",name);
    while(name[len]!='\0'){
        len++;
    }
    printf("\nname : %s\n",name);
    upperCase(name);
    return 0;
}