#include<stdio.h>
#include<math.h>
void main()
{
    // circle
    float r,a,l,b;
    float area,peri;
    printf("Enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",peri);

// square
    printf("enter the side of square\n");
    scanf("%f",&a);
    area=a*a;
    peri=4*a;
    printf("area of square=%f\n",area);
    printf("perimeter of square=%f\n",peri);

    //rect
    printf("enter the length and breadth of rectangle\n");
    scanf("%f%f",&l,&b);
    area=l*b;
    peri=2*(l+b);
    
    
    printf("area of rect=%f\n",area);
    printf("peri of rect=%f\n",peri);
}