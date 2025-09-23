// Fibonacci Series using Function

#include <stdio.h>

void Fibonacci_Series(int num);

int main()
{
    int num;
    printf("Enter a number to want Fibonacci Series : ");
    scanf("%d", &num);
    Fibonacci_Series(num);
    return 0;
}

void Fibonacci_Series(int num)
{
    int a=0, b=1;
    printf("0 ");

    if(num > 1)
    {
        printf("1 ");
    }

    int sum;

    for (int i = 0; i < num-2; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    
}