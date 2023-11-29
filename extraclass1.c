#include<stdio.h>
void main()
{
    float r,area,peri;
    printf("enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",peri);

}