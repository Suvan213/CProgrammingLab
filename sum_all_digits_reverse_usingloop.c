#include<stdio.h>
int main()
{
    int n,rev=0, remi;
    printf("enter an integer number");
    scanf("%d",&n);
    while(n!=0)
    {
        remi=n%10;
        rev=rev*10+remi;
        n/=10;
    }
    printf("reverse number=%d",rev);
    return 0;
}