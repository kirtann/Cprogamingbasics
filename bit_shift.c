#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a value of a :");
    scanf("%d", &a);
    printf("Enter a number of bits to shift :");
    scanf("%d", &b);
    printf("The new a after bit shift is %d<<%d=%d", a, b, a << b);
    return 0;
}