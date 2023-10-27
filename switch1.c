#include <stdio.h>
void main()
{
    int num, n1, n2;
    printf("Enter Any Two Digit Number : ");
    scanf("%d", &num);
    if (num < 10 || num > 99)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Value of Number : %d\n", num);
        n1 = num / 10;
        n2 = num % 10;

        printf("First Number : %d\n", n1);
        printf("Second Number : %d\n", n2);
    }

    switch (n1)
    {
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    case 3:
        printf("THREE");
        break;
    case 4:
        printf("FOUR");
        break;
    case 5:
        printf("FIVE");
        break;
    case 6:
        printf("SIX");
        break;
    case 7:
        printf("SEVEN");
        break;
    case 8:
        printf("EIGHT");
        break;
    case 9:
        printf("NINE");
        break;
    case 0:
        printf("ZERO");
        break;
    default:
        printf("Invalid Input");
        break;
    }

    printf("\n");

        switch (n2)
    {
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    case 3:
        printf("THREE");
        break;
    case 4:
        printf("FOUR");
        break;
    case 5:
        printf("FIVE");
        break;
    case 6:
        printf("SIX");
        break;
    case 7:
        printf("SEVEN");
        break;
    case 8:
        printf("EIGHT");
        break;
    case 9:
        printf("NINE");
        break;
    case 0:
        printf("ZERO");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}