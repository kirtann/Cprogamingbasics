#include <stdio.h>

int main()
{
    int tab[10];
    int n;
    printf("Enter a value for calculating it's table :");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        tab[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, tab[i]);
    }
    return 0;
}