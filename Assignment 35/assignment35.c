// Create a program that print patterns
// Reverse Right Half Pyramid

#include <stdio.h>

int main(){
    printf("Welcome to printing Patterns\n");
    int rows;
    printf("Enter number of rows to Print : ");
    scanf("%d", &rows);

    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}