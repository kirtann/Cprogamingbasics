#include <stdio.h>

int main()
{
    int a, i, d = 0;
    printf("Enter the number you want to check for :");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            d = 1;
            break;
        }
    }
    if (a == 1)
    {
        printf("The number is neither a prime nor a composite number");
    }
    else
    {
        if (d == 1)
        {
            printf("The number is composite.");
        }
        if (d == 0)
        {
            printf("The number is prime.");
        }
    }
    return 0;
}