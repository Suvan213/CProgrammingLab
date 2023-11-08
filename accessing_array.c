#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10];
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
     
 for(i=0;i<=n; i++){
    printf("\n enter the %d value of array :",i);
    scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 printf("\n%d %d %d %d",arr[i],*(i+arr),*(arr+i),i[arr]);
}