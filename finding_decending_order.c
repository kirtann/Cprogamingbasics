#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Three Values a,b,c :");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && c < b){
        if(a<c){
        printf("b=%d is the greatest\n", b);
        printf("c=%d is the second greatest\n", c);
        printf("a=%d is the smallest\n", a);
        printf("order is b>c>a");
        }
        else{
        printf("b=%d is the greatest\n", b);
        printf("a=%d is the second greatest\n", a);
        printf("c=%d is the smallest\n", c);
        printf("order is b>a>c");
        }
    }
    if (b < a && c < a){
        if(b<c){
        printf("a=%d is the greatest\n", a);
        printf("c=%d is the second greatest\n", c);
        printf("b=%d is the smallest\n", b);
        printf("order is a>c>b");
        }
        else{
        printf("a=%d is the greatest\n", a);
        printf("b=%d is the second greatest\n", b);
        printf("c=%d is the smallest\n", c);
        printf("order is a>b>c");
        }
    }
    if (a < c && b < c){
        if(a<b){
        printf("c=%d is the greatest\n", c);
        printf("b=%d is the second greatest\n", b);
        printf("a=%d is the smallest\n", a);
        printf("order is c>b>a");
        }
        else{
        printf("c=%d is the greatest\n", c);
        printf("a=%d is the second greatest\n", a);
        printf("b=%d is the smallest\n", b);
        printf("order is c>a>b");
        }
    }
    return 0;
}