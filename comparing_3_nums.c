#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Three Values a,b,c :");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        if (b < c)
        {
            printf("c=%d is the greatest", c);
        }
        else
        {
            printf("b=%d is the greatest", b);
        }
    }
    else
    {
        printf("a=%d is the greatest", a);
    }
    return 0;
}