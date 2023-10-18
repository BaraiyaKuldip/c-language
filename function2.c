#include <stdio.h>

int Add(int n1, int n2)
{
    int add;
    add = n1 + n2;

    return add;
}

int Sub(int a, int b)
{
    float sub = 0;
    if (a >= b)
        return (a - b);

    else
        return (b - a);
}

float Mul(float n1, float n2)
{
    float Mul;

    Mul = (n1 * n2);

    return Mul;
}

float Div(float n1, float n2)
{
    float Div;

    Div = (n1 / n2);

    return Div;
}

int Mod(int n1, int n2)
{
    int Mod;

    Mod = (n1 % n2);

    return Mod;
}
void main()
{
    int number1, number2, addition, sub,mod;
    float mul, div;

    printf("Enter Value of Number 1 : ");
    scanf("%d", &number1);

    printf("Enter Value of Number 2 : ");
    scanf("%d", &number2);

    addition = Add(number1, number2);

    printf("Addition of Given number %d \n", addition);

    sub = Sub(number1, number2);

    printf("Substraction of Given number %d \n", sub);

    mul = Mul(number1, number2);

    printf("Maltiplication of Given number %.2f \n", mul);

    div = Div(number1, number2);

    printf("Division of Given number %.2f \n", div);

    mod = Mod(number1, number2);

    printf("Module of Given number %d \n", mod);
}

/*
int Sub(int a,int b)
{
    float sub = 0;
    if(a>=b)
    {
         return (a - b);

    }

    else
    {
        return  (b - a);

    }

}
*/