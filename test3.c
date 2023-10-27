// write a programe to perform calculater and also use switch case in programe.

#include <stdio.h>
void main()
{
    int act,mod,m1,m2;
    float n1, n2, add, sub, mul, div;

    printf("\n1 For Addition");
    printf("\n2 For Subsraction");
    printf("\n3 For Multiplication");
    printf("\n4 For Division");
    printf("\n5 For Module");
    printf("\nChoose A Numer For Action : ");

    scanf("%d", &act);

    switch (act)
    {
    case 1:
        printf("Enter Value of Number 1 : ");
        scanf("%f", &n1);
        printf("Enter Value of Number 2 : ");
        scanf("%f", &n2);
        add = n1 + n2;
        printf("Addition of Given Numbers is : %.2f", add);
        break;
    case 2:
        printf("Enter Value of Number 1 : ");
        scanf("%f", &n1);
        printf("Enter Value of Number 2 : ");
        scanf("%f", &n2);
        sub = n1 - n2;
        printf("Substraction of Given Numbers is : %.2f", sub);
        break;
    case 3:
        printf("Enter Value of Number 1 : ");
        scanf("%f", &n1);
        printf("Enter Value of Number 2 : ");
        scanf("%f", &n2);
        mul = n1 * n2;
        printf("multiplication of Given Numbers is : %.2f", mul);
        break;
    case 4:
        printf("Enter Value of Number 1 : ");
        scanf("%f", &n1);
        printf("Enter Value of Number 2 : ");
        scanf("%f", &n2);
        div = n1 / n2;
        printf("Division of Given Numbers is : %.2f", div);
        break;
    case 5:
        printf("Enter Value of Number 1 : ");
        scanf("%d", &m1);
        printf("Enter Value of Number 2 : ");
        scanf("%d", &m2);
        mod = m1 % m2;
        printf("Module of Given Numbers is : %d",mod);
        break;


    default:
        printf("Invalid Input");
        break;
    }
}