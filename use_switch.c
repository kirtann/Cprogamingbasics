#include <stdio.h>

int main()
{
    int r;
    printf("Enter 1 for Addition, Enter 2 for Subtraction, Enter 3 for Multiplication, Enter 4 for Division, ");
    scanf("%d", &r);
    int a, b;
    float div;
    printf("Enter two values for doing operations on");
    scanf("%d%d", &a, &b);
    switch (r)
    {
    case 1:
        printf("The Value of first entered number added by second entered number is %d", a + b);
        break;
    case 2:
        printf("The Value of first entered number subtracted by second entered number is %d", a - b);
        break;
    case 3:
        printf("The Value of first entered number multiplied by second entered number is %d", a * b);
        break;
    case 4:
        div = (float)a / b;
        printf("The Value of first entered number divided by second entered number is %d", div);
        break;
    default:
        printf("You entered wrong choice so ,no possible outcome found");
        break;
    }
        
    return 0;
}