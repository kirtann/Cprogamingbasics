#include <stdio.h>
void fuction(int x, int y, int z)
{
    if (x < y && z < y)
    {
        if (x < z)
        {
            printf("%d is the greatest\n", y);
            printf("%d is the second greatest\n", z);
            printf("%d is the smallest\n", x);
            printf("order is %d>%d>%d", y, z, x);
        }
        else
        {
            printf("%d is the greatest\n", y);
            printf("%d is the second greatest\n", x);
            printf("%d is the smallest\n", z);
            printf("order is %d>%d>%d", y, x, z);
        }
    }
}
int main()
{
    int a, b, c;
    printf("Enter Three Values a,b,c :");
    scanf("%d %d %d", &a, &b, &c);
    fuction(a, b, c);
    fuction(b, a, c);
    fuction(a, c, b);

    return 0;
}