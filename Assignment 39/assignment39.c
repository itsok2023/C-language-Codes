// Printing Table using Function

#include <stdio.h>

void Table(int num);

int main()
{
    int num;
    printf("Enter the number to print table of : ");
    scanf("%d", &num);

    Table(num);

    return 0;
}

void Table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        int mult = i * num;
        printf("%d x %d = %d \n", num, i, mult);
    }
    
}