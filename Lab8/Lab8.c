//Develop a C program to copy one string to another string and find its length without using built in functions.

#include<stdio.h>
 int main()
{
   char a[100], b[100];
   int i;
   {
   printf("\nEnter the string :");
   gets(a);

   i = 0;
   while (a[i] != '\0')
        {
      b[i] = a[i];
      i++;
        }

   b[i] = '\0';
   printf("\nCopied String is %s ", b);

    printf("\nLength of string: %d",i);
    scanf("%s",b);
    for(i=0; b[i]!='\0'; ++i);


   return (0);
   }
}
