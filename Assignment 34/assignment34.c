// Create a program that print patterns
// Right Half Pyramid

#include <stdio.h>

int main()
{
    printf("Welcome to printing Patterns\n");
    int rows;
    printf("Enter number of rows to Print : ");
    scanf("%d", &rows);


    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
            
        }
        
        printf("\n");
    }
    
    return 0;
}