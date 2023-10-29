#include<stdio.h>
void main()
{
    int num,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("sum of digits=%d",sum);
}