#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    printf("enter four values");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float distance=sqrt(pow((c-a),2)+pow((d-b),2));
    printf("enter the distance=%f",distance);
}