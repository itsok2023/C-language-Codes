// Write a function that adds that takes 4 int parameters and returns the sum

#include <stdio.h>

int Sum(int, int, int, int);

int main()
{
    int a, b, c, d;
    printf("Enter 4 Numbers : ");
    scanf("%d%d%d%d",&a, &b, &c, &d);

    int res = Sum(a, b, c, d);
    printf("Sum is : %d", res);

    return 0;
}

int Sum(int n1, int n2, int n3, int n4)
{
    int i;

    i = n1 + n2 + n3 + n4;

    return i;
}