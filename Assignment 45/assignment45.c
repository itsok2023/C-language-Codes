// x^1 / 1! + x^2 /2! + x^3 / 3! + x^4 / 4! + ... + x^n / n!
// Taking input as 'x' and 'n'
// Using loop

#include <stdio.h>

int main()
{
    float x;
    int n;

    printf("Enter the number for x : ");
    scanf("%f", &x);

    printf("Enter the number for n : ");
    scanf("%d", &n);

    long double fact = 1.0;
    double res = 0.0;
    double power = 1.0;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        power = power * x;

        res = res + (power / fact);

    }

    printf("The value is %lf", res);
    

    return 0;
}