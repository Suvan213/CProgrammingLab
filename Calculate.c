#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int x;
    printf("1=addition 2=subtraction 3=multiplication 4=division");
    scanf("%d",&x);
    if(x==1)
    {
        c=a+b;
     printf("addition:%d",c);
    }
    else if(x==2)
    {
        c=a-b;
        printf("subtraction:%d",c);
    }
else if(x==3)
{
    c=a*b;
    printf("multiplication:%d",c);
}
else if
(x==4)
{
    if(b==0)
    {
        printf("infinity");

    }
    else{
        c=a/b;
        printf("division:%d",c);
    }
}

}