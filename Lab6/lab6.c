#include <stdio.h>

#include<stdio.h>
int main()
 {
  int n, square, sum = 0, i = 1;
  printf("Enter the value for n:");
  scanf("%d", &n);
  sum = n *(n+1)*(2*n+1) / 6;
  printf("Sum of squares of first %d natural numbers is %d\n", n, sum);
 return 0;
}
