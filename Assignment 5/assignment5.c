// Task 1 :- Taking input as a character from user and print ASCII number of that
// Task 2 :- Taking input as a ASCII number and print character of that 
// For example:
//              A - 65
//              65 - A


#include <stdio.h>

int main()
{
    char ch;
    int num;

    printf("Enter any character : ");
    scanf("%c",&ch);
    printf("ASCII number of character %c is :- %d\n", ch, ch);

    printf("Enter any ASCII Number : ");
    scanf("%d",&num);
    printf("Character of ASCII Number %d is :- %c ", num, num);

    return 0;
}