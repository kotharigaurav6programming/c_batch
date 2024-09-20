// program showing the concept of string | COPYING VALUE OF ONE STRING INTO ANOTHER

#include<stdio.h>
int i,len=0;    // global variables
char name[50];  // global variable   
char copyName[50]; // global variable

char* copyString(char name[]){
    for(i=0;i<len;i++){
        copyName[i] = name[i];
    }
    copyName[i] = '\0';
    return copyName;
}
int main(){
    
    printf("Enter name : ");
    scanf("%[^\n]s",name);
    while(name[len]!='\0'){
        len++;
    }
    printf("\nname : %s\n",name);
    printf("copyString data : %s\n",copyString(name));
    return 0;
}