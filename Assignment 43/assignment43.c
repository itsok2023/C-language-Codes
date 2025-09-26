// 1/1! + 1/2! + 1/3! + 1/4! + .... + 1/n!
// Taking input as 'n'
// Using loop

#include <stdio.h>

int main()
{
    int num;
    long fact = 1;
    double res = 0.0;

    printf("Enter a number (n) for the series 1/1! + ... + 1/n! : ");
    scanf("%d", &num);

    
    for(int i = 1; i <= num; i++)
    {
        
        fact = fact * i;

        res = res + 1.0 / fact ;
    }

    printf("The sum of the series is: %lf\n",res);

    return 0;
}