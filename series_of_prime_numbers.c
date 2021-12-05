#include <stdio.h>

int main()
{
    int a, i, j;
    printf("Enter the value of limit for which you want to print your values :");
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {   int d=0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                d=1;
                break;
            }
        }
        if(d == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}