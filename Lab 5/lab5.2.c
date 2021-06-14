// Develop a C program to print even numbers from M to N.


#include<stdio.h>

int main()
{
  	int i, num;
  	printf("\n Please Enter Upper Range:\n");
  	scanf("%d", &num);
  	printf("\n Even Numbers between 1 and %d are : \n", num);
  	for(i = 2; i <= num; i= i+2)
  	{
		printf(" %d\t", i);
  	}

  	return 0;
}
