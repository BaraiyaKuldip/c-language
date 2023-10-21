#include <stdio.h>

    struct triangle
    {
        float height;
        float base; 
        float area;
    }t1,t2;
    

void printArea()
{
printf("Enter Value Of Height : ");
scanf("%f",&t1.height);
printf("Enter Value Of Base : ");
scanf("%f",&t1.base);
t1.area=(t1.height*t1.base)/2;
printf("Area Of Triangle %.2f",t1.area);
}

void main()
{

printArea();

}