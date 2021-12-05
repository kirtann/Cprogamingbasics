#include <stdio.h>

int main()
{
    int Days, months, years;
    char month;
    printf("Enter Date For evaluation :");
    scanf("%d/%d/%d", &Days, &months, &years);
    if (months == 1)
    {
        printf("month(in words)=January\n");
    }
    else if (months == 2)
    {
        printf("month(in words)=Febuary\n");
    }
    else if (months == 3)
    {
        printf("month(in words)=March\n");
    }
    else if (months == 4)
    {
        printf("month(in words)=April\n");
    }
    else if (months == 5)
    {
        printf("month(in words)=May\n");
    }
    else if (months == 6)
    {
        printf("month(in words)=June\n");
    }
    else if (months == 7)
    {
        printf("month(in words)=July\n");
    }
    else if (months == 8)
    {
        printf("month(in words)=August\n");
    }
    else if (months == 9)
    {
        printf("month(in words)=September\n");
    }
    else if (months == 10)
    {
        printf("month(in words)=Octomber\n");
    }
    else if (months == 11)
    {
        printf("month(in words)=November\n");
    }
    else
    {
        printf("month(in words)=December\n");
    }
    return 0;
}