#include <stdio.h>

int main()
{
    int day;
    float month, year;
    printf("Enter The No.Of Days :");
    scanf("%d", &day);
    printf("days=%d \n", day);
    printf("months=%f \n", month = (float)day / 30);
    printf("years=%f \n", year = (float)day / 365);
    return 0;
}