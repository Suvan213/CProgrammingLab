#include<stdio.h>
void main()
{
    float r,area,circumference;
    printf("enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area of circle=%.2f\n",area);
    printf("circumference%.2f\n",circumference);

}