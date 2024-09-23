// program showing the concept of structure
#include<stdio.h>

struct Student{
    int rno;
    float per;
    char name[50];
};
struct Student s;

int main(){
    printf("Enter roll number :  ");
    scanf("%d",&s.rno);

    printf("Enter percentage :  ");
    scanf("%f",&s.per);
    getchar();

    printf("Enter name :  ");
    scanf("%[^\n]s",s.name);

    printf("\nStudent details : \n");
    printf("Roll number : %d\n",s.rno);
    printf("Percentage : %.2f\n",s.per);
    printf("Name : %s\n",s.name);
}