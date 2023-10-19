#include<stdio.h>
#include<math.h>
void main()
{
    float r,a,l,b;
    printf("Enter the radius");
    printf("enter the side of square\n");
    printf("enter the length and breadth of rectangle\n");
    scanf("%f",&r);
    scanf("%f",&a);
    scanf("%f%f",&l,&b);
    float area,peri,ar,pr,are,per;
    are=3.14*r*r; 
    printf("area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",peri);

    peri=2*3.14*r;
    area=a*a;
    pr=4*a;
    ar=l*b;
    per=2*(l+b);
    
    printf("area of square=%f\n",area);
    printf("perimeter of square=%f\n",pr);
    printf("area of rect=%f\n",ar);
    printf("peri of rect=%f\n",per);
}