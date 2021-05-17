#include<stdio.h>
int main(void)
{
    int a, b;
    printf("input the values for Number1 and Number2:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
         printf("number 1 is greater than number 2");
    }

    else if (a<b)
    {
        printf("number 2 is greater than number 1");
    }
        return 0;
}
