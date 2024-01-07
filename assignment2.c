#include<stdio.h>
void main()
{
    int A,B,C;
    printf("Enter three numbers=");
    scanf("%d%d%d",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        printf("%d is the greatest number",A);
        else
        printf("%d is the grestest numbrer",C);
    }
    else
    {
     if(B>C)
     printf("%d is the greatest number",B);
     else
     printf("%d is the greatest number",C);
    }
}