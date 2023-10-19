#include<stdio.h>
void main()
{
    int a,b,c,d,e,total,avg;
    char grade;
    printf("enter the marks of english");
    scanf("%d",&a);
    printf("enter the marks of hindi");
    scanf("%d",&b);
    printf("enter the marks of maths");
    scanf("%d",&c);
    printf("enter the marks of science");
    scanf("%d",&d);
    printf("enter the marks of computer");
    scanf("%d",&e);
    total=a+b+c+d+e;
    avg=total/5;
    if(avg>=90&&avg<=100)
    {

        grade='A';
        printf("you have scored:%c",grade);
    }
    else if(avg>=80&&avg<=90)
        {
            grade='B';
            printf("you have scored:%c",grade);
        }
        else if(avg>=70&&avg<=80)
        {
            grade='C';
            printf("you have scored:%c",grade);
        }
         else if(avg>=50&&avg<=60)
        {
            grade='D';
            printf("you have scored:%c",grade);
        } 
        else 
        {
           printf("fail");
        }
}