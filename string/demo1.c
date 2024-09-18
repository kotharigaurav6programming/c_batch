// program showing the concept of string

#include<stdio.h>
int main(){
    int i=0,len=5;
    char ch[]={'h','e','l','l','o','\0'};
    printf("ch[0] : %c\n",ch[0]);
    printf("ch[1] : %c\n",ch[1]);
    printf("ch[2] : %c\n",ch[2]);
    printf("ch[3] : %c\n",ch[3]);
    printf("ch[4] : %c\n",ch[4]);
    printf("ch[5] : %c\n",ch[5]);

    for(i=0;i<len;i++){
        printf("\nch[i] : %c\n",ch[i]);
    }
    printf("\nch : %s\n",ch);
        
}