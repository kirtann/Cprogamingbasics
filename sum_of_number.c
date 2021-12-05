#include <stdio.h>

int main()
{
    int a, i, sum = 0;
    printf("Enter a number till which you want to print the sum :");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("The sum of n natural numbers is %d", sum);
    return 0;
}