#include <stdio.h>

void factorial(int);

int main()
{
    int a, b;
    printf("Enter the value of number for which you want to find factorial :");
    scanf("%d", &a);
        factorial(a);
    printf("\nEnter the value of number for which you want to find factorial :");
    scanf("%d", &b);
        factorial(b);
    return 0;
}

void factorial(int y)
{
    int x = 1, fact=1;
    while (x < y)
    {
        fact = fact * (x + 1);
        x++;
    }
    printf("The factorial of the number entered is %d", fact);
}