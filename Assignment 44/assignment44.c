// x/1! - x/2! + x/3! - x/4! + .... x/n!
// taking input as 'x' and 'n'
// Using Loop

#include <stdio.h>

int main()
{
    int n;
    float x;
    printf("Enter the value of x : ");
    scanf("%f", &x);

    printf("Enter the value of n : ");
    scanf("%d", &n);

    long fact = 1;
    double res = 0.0;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;

        if (i % 2 == 0)
        {
            res = res - (x / fact);
        }
        else
        {
            res = res + (x / fact);
        }

    }
    
    printf("The total value is : %lf", res);


    return 0;
}