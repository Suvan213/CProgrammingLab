#include<stdio.h>
int main()
{
    int n,i;
float num,maximum;
printf("enter the number of elements:");
scanf("%d",&n);
maximum=-999999999;
for (i=0;i<n;++i)
{
    printf("enter the number:");
    scanf("%f",&num); 
    if(num>maximum)
    {
        maximum=num;
    }
}
    printf("maximum number is:%2f\n",maximum);
return 0;
}