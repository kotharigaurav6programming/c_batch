// program showing the concept of string | concat two strings

#include<stdio.h>
int i,flen=0,llen=0;    // global variables
char fname[50],lname[50];  // global variable   

char* fullName(char fname[],char lname[]){
    fname[flen]=' '; // for getting space in between names
    flen++;
    for(i=0;i<llen;i++,flen++){
       fname[flen] = lname[i];
    }
    fname[flen] = '\0';
    return fname;
}
int main(){
    
    printf("Enter first name : ");
    scanf("%[^\n]s",fname);
    while(fname[flen]!='\0'){
        flen++;
    }
    getchar();
    printf("Enter last name : ");
    scanf("%[^\n]s",lname);
    while(lname[llen]!='\0'){
        llen++;
    }
    printf("\nFirst name : %s\n",fname);
    printf("\nLast name : %s\n",lname);
    
    printf("Full Name : %s\n",fullName(fname,lname));
    return 0;
}