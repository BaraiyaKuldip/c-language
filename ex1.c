#include <stdio.h>
void main()
{

int i,j,k,l;
l=4;
k=5;
for(j=1;j<=5;j++)
{
     for(i=1;i<=k;i++)
{
    printf(" ");
}
k--;
    for(i=1;i<=j;i++)
{
    printf("* ");
}
printf("\n");
}
for(j=2;j<=5;j++)
{
     for(i=1;i<=j;i++)
{
    printf(" ");
}

    for(i=1;i<=l;i++)
{
    printf("* ");
}
l--;
printf("\n");
}

printf("\n");
/*for(j=1;j<=5;j++)
{
     for(i=1;i<=j;i++)
{
    printf("_");
}

    for(i=1;i<=k;i++)
{
    printf("* ");
}
k--;
printf("\n");
}
/*for(i=1;i<5;i+1)
{
    printf("*");
}*/
}