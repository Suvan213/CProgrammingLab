#include<stdio.h>
void main()
{
    int rollno[50],i,n,j;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the values");
    for (i=0;i<=n;i++)
    {
        scanf("%d",&rollno[i]);}
    
    for (j=1;j<=n;j+=2){
        printf(" %d ",rollno[j]);
    }
    }

c