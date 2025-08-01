/// Program to convert a character into its opposite case
// For example: 'a' -> 'A', 'B' -> 'b'

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any Small or Capital Character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
        if(ch>='a' && ch<='z'){
            printf("Uppercase is %c",ch-32);
        }
        else{
            printf("Lowercase is %c",ch+32);
        }
    }
    else{
        printf("Enter a valid Alphabet Character");
    }
    return 0;
}