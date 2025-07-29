// Program to check which number is smaller between two integers

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    (a<b) ? printf("%d is Less",a):printf("%d is Less",b);

    return 0;
}