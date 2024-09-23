// program showing the concept of structure
#include<stdio.h>
int num,i; // global variable
    
struct Student{
    int rno;
    float per;
    char name[50];
};
struct Student s[50];

void getData(struct Student s[]){
    printf("\nEnter student details\n");
    for(i=0;i<num;i++){
        printf("Enter roll number :  ");
        scanf("%d",&s[i].rno);

        printf("Enter percentage :  ");
        scanf("%f",&s[i].per);
        getchar();

        printf("Enter name :  ");
        scanf("%[^\n]s",s[i].name);
    }
}

void printData(struct Student s[]){
    for(i=0;i<num;i++){
        printf("\nRoll number : %d\n",s[i].rno);
        printf("Percentage : %.2f\n",s[i].per);
        printf("Name : %s\n",s[i].name);
    }
}
int main(){
    printf("Enter no. of students : ");
    scanf("%d",&num);

    getData(s);
    printf("\nStudent details : \n");
    printData(s);
}