//Develop a C program to find the area of a triangle given its sides as input using functions
#include<stdio.h>
#include<math.h>
 
float AreaofaTriangle(float, float, float);
 
main()
{
   float a, b, c, ar;
 
   printf("Please Enter the three sides of triangle");
   scanf("%f%f%f",&a,&b,&c);
 
   ar = AreaofaTriangle(a, b, c);
   printf("\nArea of triangle = %.2f\n", ar);
 
   return 0;
}
 
float AreaofaTriangle( float a, float b, float c )
{
   float s, ar;
 
   s = (a+b+c)/2;
   ar = sqrt(s*(s-a)*(s-b)*(s-c));
   return ar;
}
