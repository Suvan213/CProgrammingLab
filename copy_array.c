#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Given Array: ");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    for(int k=0;k<n;k++)
    {
        b[k]=a[k];
    }
    printf("\nCopied Array: ");
    for(int l=0;l<n;l++)
    {
        printf("%d ",b[l]);
    }
}

