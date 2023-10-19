#include<stdio.h>
int main()
{
    float a=5,b=10,c=15;
    float m,x,y,z;
    m=a+b*c;
    x=(a+b)*c;
    y=a-b/c;
    z=(a-b)/c;
    printf("result of a+b*c:%f\n",m);
    printf("result of (a+b)*c:%f\n",x);
    printf("result of a-b/c:%f\n",y);
    printf("result of (a-b)/c:%f\n",z);
}

