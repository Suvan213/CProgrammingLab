#include<stdio.h>
void main()
{
    char a[50];
    printf("enter the string :");
    scanf(" %[^\n]s",a);
    int i,len=0;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        len++;
    }
    printf("length of string is=%d",len);
    char b[len];
    for(i=0;i<len;i++)
    {
        b[i]=a[len-1-i];
    }
    printf("the reverse string %s",b);
    int flag=0;
    for(i=0;i<len;i++)
    {
        int m=a[i];
        int n=b[i];
        if(m!=n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("the given string is equal");
    else
    printf("the given string is not equal");
}