#include<stdio.h>

int  main()
{
    int radius;
    float area,circumference;
    printf("Value Of Radius is \n");
    scanf("%d", &radius);
    printf("Your Entered Value is %d\n", radius);
    printf("Your Area Of Circle is %f\n", area=3.14*radius*radius);
    printf("Your Circumference Of Circle is %f", circumference=2*3.14*radius);
    return 0;
}