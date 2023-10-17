#include <stdio.h>
float printarea(float area)
{

    printf("Triangle Area : %.2f\n", area);
}
void main()
{
    float height, base, area;
    printf("Enter Value Of Triangle \n");
    printf("Enter Value OF Height : ");
    scanf("%f", &height);
    printf(" Value OF Height : %.2f\n", height);
    printf(" Enter Value OF Base : ");
    scanf("%f", &base);
    printf(" Value OF Base : %.2f\n", base);
    area = (height * base) / 2;
    printarea(area);
}