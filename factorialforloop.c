#include<stdio.h>
void main()
{
    int number,i;
    unsigned long long factorial=1;
    printf("enter a positive integer");
    scanf("%d",&number);
    if(number<0)
    {printf("error for -ve integer");}
    else
    {
    for(i=1;i<=number;i++)
    {factorial*=i;}
    }
    printf("factorial=%d=%llu\n",number,factorial);
}