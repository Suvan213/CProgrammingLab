#include<stdio.h>
void fun();
void main() 
{
    int a=10;
    printf("%d\n",a);
{
    printf("%d\n",a);
    fun();
    fun();
    fun();
}
}


void fun()
{
    auto int a=30,b;
    b=a++;
    printf("  coming from fun b = %d\n",b);
}














