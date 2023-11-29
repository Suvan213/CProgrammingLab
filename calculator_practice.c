#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum: %d\n",c);
    c=sub(a,b);
    printf("Sum: %d\n",c);
    multi(a,b);
    div();
    int add(int,int);
    int sub();
    void multi(int,int);
    void div();
    

}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int c=a-b;
    return c;
}
void multi(int a,int b)
{
    int c=a*b;
    printf("Multiplication: %d",c);
}
void div()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("Invalid Division!");
    }
    else{
    int c=a/b;
    printf("Division: %d",c);
    }
}
