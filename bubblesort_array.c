#include<stdio.h>
void main()
{
    int arr[30],i,num,temp,j;
    printf("enter the no of elements in array\n");
    scanf("%d",&num);
    printf("enter the elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<num-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            

        }
    }
    printf("sorted array: ");
    for(int k=0;k<num;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
    return 0;
}