#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the limit till you want to print the series :");
    scanf("%d", &n);
    printf("The even numbers series till the limit set are :\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
        i++;
    }
    printf("The odd numbers series till the limit set are :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}