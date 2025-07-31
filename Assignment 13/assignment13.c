// Program to find the greatest among three numbers using nested ternary operator

#include <stdio.h>

int main()
{
    int a, b, c, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter thire number: ");
    scanf("%d", &c);

    result=(a>b)
        ? (a>c)?a:c
        : (b>c)?b:c;

        printf("%d is Greatest Number",result);

    return 0;
}