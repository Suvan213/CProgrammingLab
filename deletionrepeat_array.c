#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n],element,found=0;
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search: ");
    scanf("%d",&element);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==element)
        {
            printf("elements found at index %d\n element: %d",j,element);
            found = 1;
             break;
        }
    }
    if(found!=1)
    {
        printf("element not found");
    }
}