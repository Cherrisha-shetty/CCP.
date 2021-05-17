  //Implement a C program to find distance between two points.

  #include<stdio.h>
  #include<math.h>
  int main()
  {
      float X1, Y1, X2, Y2, distance;
      printf("Enter point 1 (X1,Y1)\n");
      scanf("%f%f", &X1, &Y1);
      printf("enter point 2 (X2,Y2)\n");
      scanf("%f%f", &X2, &Y2);
      distance= sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
      printf("distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n" , X1, Y1, X2, Y2, distance);

      return 0;

  }
