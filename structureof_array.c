#include<stdio.h>
void main()
{
    struct student
    {
        char name[50];
        int rollno;
        float avg;
    };
    int n;
    printf("enter the no. of students");
    scanf("%d",&n);
    struct student s[n];
    printf("enter the student details....\n");
    for(int i=0;i<n;i++)
    {
        scanf("%[^\n]s",s[i].name);
        scanf("%d",&s[i].rollno);
        scanf("%f",&s[i].avg);
    }
    printf("the student details are...\n");
    for(int i=0;i<n;i++)
    {
        printf("student name:%s\n",s[i].name);
        printf("student roll no :%d\n",s[i].rollno);
        printf("student average:%f\n",s[i].avg);
    }
    }
