#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the limit till you want to print the series(Enter a even number to obtain even series and odd to obtain odd series) :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number entered as limit is even so;\n");
        printf("The even numbers series till the limit set are :\n");
        for (int i = 0; i <= n; i++)
        {
            printf("%d\n", i);
            i++;
        }
    }
    if (n % 2 == 1)
    {
        printf("The number entered as limit is odd so;\n");
        printf("The odd numbers series till the limit set are :\n");
        for (int i = 1; i <= n; i++)
        {
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}