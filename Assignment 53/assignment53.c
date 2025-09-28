// Define a function square that takes an int and returns its square

#include <stdio.h>

int Square(int);

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    int res = Square(num);

    printf("Square is : %d", res);
    
    return 0;
}

int Square(int num)
{
    int power = 1;
    for (int i = 1; i <= 2; i++)
    {
        power = power * num;
    }
    
    return power;
}