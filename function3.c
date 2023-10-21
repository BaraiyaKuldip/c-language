#include <stdio.h>

/*void BMI(float bmi)
{
  float weight, f_to_m, i_to_m, height,bmi;
  int foot_h, inch_h;

  printf("Enter Weight : ");
  scanf("%f", &weight);
  printf("Enter Height in Foot : ");
  scanf("%d", &foot_h);
  printf("Ente Height in Inche : ");
  scanf("%d", &inch_h);

  printf("\nWeight : %.2f Kg\n", weight);
  printf("\nFoot   : %d  \n", foot_h);
  printf("\nInch   : %d \n", inch_h);

  f_to_m = foot_h / 3.281;
  // printf(" %f ", f_to_m);
  i_to_m = inch_h / 39.37;
  // printf(" %f ", i_to_m);
  height = f_to_m + i_to_m;
  printf("\nHeight : %.2f m \n", height);

  bmi = weight / (height * height);

  printf("\n Your BMI is : %.2f \n", bmi);
  if (bmi < 18.4)
  {
    printf("You are Underweight ");
  }
  else if (bmi < 25.0 && bmi > 18.4)
  {
    printf("You are Normal ");
  }
  else if (bmi > 25.0 && bmi < 30.0)
  {
    printf("You are Overweight");
  }
  else if (bmi > 30.0 && bmi < 35.0)
  {
    printf("You are Obese");
  }
  else
  {
    printf("You are Extremely Obese");
  }

}*/

void AreaT()
{

  float height, base, areat = 0;

  printf("\n ------- Triangle -------  \n");
  printf("Enter Value Of Height : ");
  scanf("%f", &height);
  printf("Enter Value Of Base : ");
  scanf("%f", &base);
  areat = (base * height) / 2;
  printf("Area OF Triangle : %.2f", areat);
}
void AreaC()
{

  float r, h, π, areac;

  π = 3.1415;

  printf("Enter Value of Radius = ");

  scanf("%f", &r);

  printf("Value of Radius = %.2f", r);

  printf("Enter Value of Height = ");

  scanf("%f", &h);

  printf("Value or Height = %.2f", h);

  printf("Value of π = %.4f", π);

  areac = (π * r * h) * 2 + (π * r * r) * 2;

  printf("Area Of Cylinder = %.2f ", areac);
}
void Square()
{

  float a;

  printf("Enter Value = ");

  scanf("%f", &a);

  a = a * a;

  printf("Square = %.2f ", a);
}
void Zodiac()
{

  int month, date;

  printf("Enter Value of month ");
  scanf("%d", &month);
  printf("Enter Value of date ");
  scanf("%d", &date);

  printf("\nValue of month : %d \n\n", month);
  printf("Value of date  : %d\n\n", date);

  if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date >= 1 && date <= 19))
  {
    printf("Symbol the ram and zodiac sign is arias ");
  }
  else if ((month == 4 && date >= 20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
  {
    printf("Symbol the bull and zodiac sign is taurus ");
  }
  else if ((month == 5 && date >= 21 && date <= 31) || (month == 6 && date >= 1 && date <= 20))
  {
    printf("Symbol the twins and zodiac sign is gemini ");
  }
  else if ((month == 6 && date >= 21 && date <= 30) || (month == 7 && date >= 1 && date <= 22))
  {
    printf("Symbol the crab and zodiac sign is cencer ");
  }
  else if ((month == 7 && date >= 23 && date <= 31) || (month == 8 && date >= 1 && date <= 22))
  {
    printf("Symbol the lion and zodiac sign is leo ");
  }

  else if ((month == 8 && date >= 23 && date <= 31) || (month == 9 && date >= 1 && date <= 22))
  {
    printf("Symbol the virgin and zodiac sign is virgo ");
  }
  else if ((month == 9 && date >= 23 && date <= 30) || (month == 10 && date >= 1 && date <= 22))
  {
    printf("Symbol the scales and zodiac sign is libra ");
  }
  else if ((month == 10 && date >= 23 && date <= 31) || (month == 11 && date >= 1 && date <= 21))
  {
    printf("Symbol the scorpion and zodiac sign is scorpio ");
  }
  else if ((month == 11 && date >= 22 && date <= 30) || (month == 12 && date >= 1 && date <= 21))
  {
    printf("Symbol the Archer and zodiac sign is sagittarius ");
  }
  else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date >= 1 && date <= 19))
  {
    printf("Symbol the goat and zodiac sign is capricorn ");
  }
  else if ((month == 1 && date >= 20 && date <= 31) || (month == 2 && date >= 1 && date <= 18))
  {
    printf("Symbol the water bearer and zodiac sign is aquarius ");
  }
  else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date >= 1 && date <= 20))
  {
    printf("Symbol the fishes and zodiac sign is pisces ");
  }
  else
  {
    printf("Invalide input ");
  }
}

void main()
{
  int Choise;

  do
  {
    printf("Choose number for Oparetion \n\n");
    printf(" 1 for find BMI \n");
    printf(" 2 for find Area of Triangle \n");
    printf(" 3 for find Area of Cylinder  \n");
    printf(" 4 for find Square of given number  \n");
    printf(" 4 for find Zodiac Sign  \n");
    printf("\n Enter Number : ");
    scanf("%d", &Choise);

    if (Choise <= 4 && Choise >= 1)
    {

    switch (Choise)
    {
   /*case 1:
      BMI(bmi);
      break;*/
    case 2:
      AreaT();
      break;
    case 3:
      AreaC();
      break;
    case 4:
      Square();
      break;
    default:

      printf("Invalide Input ");
      break;
    }

    }

    printf("If Exit  then Enter  5  : << ");
    scanf("%d", &Choise);
  } while (Choise != 5);
}
