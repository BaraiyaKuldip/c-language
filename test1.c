// write a programe to check given year is miliniyam year or note.

#include <stdio.h>
void main()
{
    int year, i;

    printf("Enter Year : ");
    scanf("%d", &year);

    i = year % 1000;

    switch (i)
    {
    case 0:
        printf(" This Year is A Miliniyam Year ");
        break;
    default:
        printf(" This Year is Not A Miliniyam Year ");
        break;
    }
}