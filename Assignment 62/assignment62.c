// Declare a pointer to a char and use it to read and print a character entered by the user

#include <stdio.h>

int main()
{
    char character;
    char *n = &character ;
    printf("Enter the Character : ");
    scanf("%c", n);

    printf("The character is : %c", character);
    printf("\nThe character is : %c", *n );


    return 0;
}