// Create a program that print patterns
// Left Half Pyramid

#include <stdio.h>

int main(){
    printf("Welcome to printing Patterns\n");
    int rows;
    printf("Enter number of rows to Print : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ",i);
        }
        
        printf("\n");
    }
    
    
    return 0;
}