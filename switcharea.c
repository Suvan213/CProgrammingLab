#include<stdio.h>
void main()
{
    int x,r,s,l,b,area,peri;
    printf("area you want\n 1 for area of circle \n 2 for area of square \n 3 for area of rectangle \n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("enter the radius of circle");
        scanf("%d",&r);
        area=3.14*r*r;
        peri=2*3.14*r;
        printf("area of circle:%d\n perimeter of circle:%d",area,peri);
        break;
        case 2:
        printf("side of square");
        scanf("%d",&x);
        area=x*x;
        peri=4*x;
        printf("area of square:%d\n perimeter of square:%d",area,peri);
        break;
        case 3:
        printf("length and breadth of rectangle:");
        scanf("%d%d",&l,&b);
        area=l*b;
        peri=2*(l+b);
        printf("area of rect:%d\n perimeter of rectangle:%d",area,peri);
        break;
        default:
        printf("enter the correct value");
    }
}


    
