#include<stdio.h>

typedef union Student{
    int rno;
    float per;
    char name[50];
}stud;

void getData(union Student *s){
    printf("\nEnter student details\n");
    printf("Enter roll number :  ");
    scanf("%d",&s->rno);

    printf("Enter percentage :  ");
    scanf("%f",&s->per);
    getchar();

    printf("Enter name :  ");
    scanf("%[^\n]s",s->name); // corrected to avoid buffer overflow
}

void printData(union Student *s){
    printf("\nRoll number : %d\n",s->rno);
    printf("Percentage : %.2f\n",s->per);
    printf("Name : %s\n",s->name);
}

int main(){
    int i; // moved to local variable, but not used in this program
    stud s;

    getData(&s); // pass the address of s to getData
    printf("\nStudent details : \n");
    printData(&s);
    return 0;
}