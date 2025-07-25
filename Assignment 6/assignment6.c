// Accept any Small ALphabet from user and Print its Capital Alphabet.
// For Example:
//                  a -> A
//                  b -> B

#include <stdio.h>

int main()
{
    char ch1;

    printf("Enter any Small Alphabet :- ");
    scanf("%c",&ch1);

    ch1 = ch1-32;

    printf("The Capital Alphabet is :- %c",ch1);

    return 0;
}