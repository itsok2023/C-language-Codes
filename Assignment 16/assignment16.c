// Program to categorize a given character as:
// Capital letter, Small letter, Digit, or Special character

#include <stdio.h>

int main()
{
    char ch,result;

    printf("Enter any character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ){
        if(ch>='A' && ch<='Z'){
        printf("%c is a CAPITAL CHARACTER",ch);
        }
        else {
        printf("%c is a SMALL CHARACTER",ch);
        }
    }
    else{
        if(ch>='0' && ch<='9'){
        printf("%c is a DIGIT",ch);
        }
        else{
        printf("%c is a SPECIAL CHARACTER",ch);
        }
    }

    return 0;
}