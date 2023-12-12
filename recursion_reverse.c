#include<stdio.h>
void display(int);
void main()
{
int limit;
printf("Enter the limit to print the natural number:");
scanf("%d",&limit);
display(limit);
}
void display(int x)
{
if(x<0)
return;

else
printf("\n%d",x);
display(x-1);
return;
printf("\n%d\n",x);

}