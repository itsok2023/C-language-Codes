// Create a program using recursion to display the Fibonacci series upto a certain number

#include <stdio.h>

int Fibonacci(int pos);

int main()
{
    int num;
    printf("Enter the number upto print fibonacci Series : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf(" %d ", Fibonacci(i));
    }

    return 0;
}

int Fibonacci(int pos) {

    if (pos <= 1)
    {
        return pos;
    }

    int current =  Fibonacci (pos - 1) + Fibonacci (pos - 2);
    
    return current;

}