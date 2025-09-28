// Create a function max that takes two float arguments and returns the larger value

#include <stdio.h>

float Max(float, float);

int main()
{
    float a, b;
    printf("Enter any two float numbers : ");
    scanf("%f%f", &a, &b);

    float res = Max(a,b);

    printf("Maximum number is %.2f", res);

    return 0;
}

float Max(float n1, float n2)
{
    if (n1 > n2)
    {
        return n1;
    }

    return n2;
}