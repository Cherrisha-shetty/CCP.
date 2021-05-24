//Develop a C program to find an average of three integers using functions.
#include<stdio.h>
int main()
{
  float a, b, c, sum, avg;

  printf("Enter three Numbers: ");
  scanf("%f %f %f",&a, &b, &c);
  sum= a+b+c;
  avg = sum/3;

  printf("Entered numbers are: %.2f, %.2f and %.2f\n", a, b, c);
  printf("Average=%.2f\n",avg );
   return 0;
}