#include<stdio.h>
#include"sample1.c"
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum: %d",c);

}