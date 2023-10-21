#include <stdio.h>

struct triangle
{
    float height;
    float base;
    float area;
} t[10];

void printArea()
{
     int a;

        printf("Enter Value OF Triangle : ");
        scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Enter Value Of Height : ");
        scanf("%f", &t[i].height);
        printf("Enter Value Of Base : ");
        scanf("%f", &t[i].base);
        t[i].area = (t[i].height * t[i].base) / 2;
        printf("Area Of Triangle %.2f\n\n", t[i].area);
    }
}

void main()
{

    printArea();
}