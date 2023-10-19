#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,p,sum=0;
    printf("enter the number of terms");
    scanf("%d ",&n);
    for(m=1;m<=n;m++)
    {
        p=pow(m,3);
        printf("%d ",p);
    }
    return 0;
} 
