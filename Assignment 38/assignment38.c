// Power using Function

#include <stdio.h>

void Power(int x, int y);

int main()
{
    int x, y;
    printf("Enter the value of number and Power: \n");
    printf("Enter number : ");
    scanf("%d", &x);
    printf("Enter Power : ");
    scanf("%d", &y);
    Power(x,y);
    return 0;
}

void Power(int x, int y)
{
    int res = 1;

    for (int i = 0; i < y; i++)
    {
        res = res * x; 
    }

    printf("Answer of %d Power %d is : %d", x, y, res); 
    
}