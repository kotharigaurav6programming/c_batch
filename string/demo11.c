// program showing the concept of string | string handling functions

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50] = "Andrew Anderson";
    char str2[50] = "Mathew Math";
    char str3[50] = "Jackson Jack";
    char str4[50];

    printf("uppercase : %s\n",strupr(str1));
    printf("lowercase : %s\n",strlwr(str2));
    printf("length : %d\n",strlen(str3));

    printf("copy : %s\n",strcpy(str4,str3));
    printf("concat : %s\n",strcat(str1,str2));
    printf("compare : %d\n",strcmp("a","A"));
    printf("reverse : %s\n",strrev(str1));

    return 0;
}