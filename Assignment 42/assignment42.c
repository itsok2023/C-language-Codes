// Factorial using Recursion

#include <stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main()
{
    int data;
    printf("Enter the data to find factorial : ");
    scanf("%d", &data);

    int fact = factorial_using_loop(data);
    printf("Factorial Using loop  =  %d", fact);

    fact = factorial_using_recursion(data);
     printf("\nFactorial Using recursion  =  %d", fact); 

    return 0;
}

//Using Recursion
int factorial_using_recursion(int num)
{
    if(num == 0)
    {
        return 1;
    }

    return num * factorial_using_loop(num - 1);
}

//Using Loop
int factorial_using_loop(int num)
{
    int res = 1;
    for (int i = 2; i <= num; i++)
    {
        res = res * i;
    }
    return res;
}