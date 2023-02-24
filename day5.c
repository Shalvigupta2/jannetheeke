#include<stdio.h>
struct student
{
    char name[50];
    char rollno[10];
    int marks;
    int age;
};
int main()
{
    struct student s1[8];
    int num;
    printf("How many entries you want  : ");
    scanf("%d",&num);
    for(int i = 0 ;i <num ; i++)
    {
        printf("Enter student name : ");
        scanf("%s",&s1[i].name);
        printf("\n Enter Your Roll Number : ");
        scanf("%s",&s1[i].rollno);
        printf("\n Enter Your  marks : ");
        scanf("%d",&s1[i].marks);
        
    }
    for(int i = 0 ;i <num ; i++)
    {
        printf("Student name is %s: ",s1[i].name);
        printf("\nYour Roll Number is : %s ",s1[i].rollno);
        printf("\nYour marks is : %d",s1[i].marks);
        
    }
    return 0;
}