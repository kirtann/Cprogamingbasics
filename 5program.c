#include<stdio.h>

int  main()
{
    int a=0;
    int n;
    printf("Enter the Value Of n :");
    scanf("%d\n", &n);
    printf("The Value Entered Of n Is %d\n\n\n", n);

    do{
        printf("The Value Of a Is %d\n", a);
        a++;
    }while(a<=n);
    return 0;
}