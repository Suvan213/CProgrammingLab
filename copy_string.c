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
        b[i]=a[i];
    }
    printf("the copied string %s",b);
}