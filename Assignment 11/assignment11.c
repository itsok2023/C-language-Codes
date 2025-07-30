// Program to convert a lowercase alphabet to uppercase

#include <stdio.h>

int main()
{
    char a;
    
    printf("Enter any small Alphabet : ");
    scanf("%c",&a);

    (a >='a' && a <= 'z')
    ? printf("Uppercase: %c", a-32)
    : printf("Invalid input! Please enter lowercase alphabet");

    return 0;
}