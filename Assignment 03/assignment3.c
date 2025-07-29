// Taking 3 digit number from user and add each digit of number.
//              For Example:-
//                          Number      - 512
//                          Addition    - 5 + 1 + 2 = 8

#include <stdio.h>

int main()
{
    int no, rem1, rem2, sum;

    printf("Enter 3 Digit Number : ");

    scanf("%d", &no);

    rem1 = no % 10;

    no = no / 10;

    rem2 = no % 10;

    no = no / 10;

    sum = rem1 + rem2 + no;

    printf("Sum is %d", sum);

    return 0;
}