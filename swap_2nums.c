#include <stdio.h>

void main()
{
    int a, b, temp;
    printf("Enter Any Two Integer Number\n");
    scanf("%d\t%d", &a, &b);
    printf("Entered Value of a=%d & b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The Swapped Numbers Are a=%d & b=%d\n", a,b);
}