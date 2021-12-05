#include <stdio.h>

int main()
{
    int simpleinterest;
    int principle, time, ROI;
    printf("Enter The Principle Amount(in rs) :");
    scanf("%d", &principle);
    printf("Enter The Rate Of Interest(in percents) :");
    scanf("%d", &ROI);
    printf("Enter The time(in years) :");
    scanf("%d", &time);
    printf("So the entered principle amount is %dRs\n", principle);
    printf("The value of simple interest got=%dRs\n", simpleinterest = (principle * ROI * time) / 100);
    principle = principle + simpleinterest;
    printf("The Value of principle in total=%dRs\n", principle);
    return 0;
}