#include<stdio.h>
struct student
{
    char name[30];
    int roll_no,PID,marks;
};

int main()
{
    int i,j=1;
    struct student s[3];
    printf("Enter Records of three students:\n");
    for(i=0;i<3;i++)
    {
        printf("\nInfo of student %d:",j++);
        printf("\nEnter student name:\n");
        scanf("%s",&s[i].name);
        printf("Enter Roll No:\n");
        scanf("%i",&s[i].roll_no);
        printf("Enter PID:\n");
        scanf("%i",&s[i].PID);
        printf("Enter Marks:\n");
        scanf("%i",&s[i].marks);
    }
    printf("\nStudent Information List:");
    j=1;
    for(i=0;i<3;i++)
    {
        printf("\nStudent %d: \nName:%s \nRoll No:%i \nPID:%i \nMarks:%i\n",j++,s[i].name,s[i].roll_no,s[i].PID,s[i].marks);
    }
}
