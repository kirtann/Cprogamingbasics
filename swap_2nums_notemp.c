#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter Any Two Integer Number :");
    scanf("%d\t%d", &a, &b);
    printf("Entered Value of a=%d & b=%d before swapping\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of numbers Are a=%d & b=%d after swapping\n", a, b);
}