// write a programe to add 10 element in array and sorting.

#include <stdio.h>
void main()
{
    int num[10], i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of Num %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n\nValue of Num %d : %d \n", (i + 1), num[i]);
    }
}