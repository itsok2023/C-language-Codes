//  Assignment No 4: Taking 3 Digit number from user and reverse it
//                  For example :- 
//                                  Number -    253 
//                                  Reverse -   352

#include <stdio.h>

int main()
{
    int no, rem1, rem2, rem3, reverse;

    printf("\nEnter 3 digit number: ");

    scanf("%d", &no);

    rem1 = no % 10;                     //3 x 100
    rem2 = (no / 10) % 10;              //5 x 10
    rem3 = no / 100;                    //2

    reverse = rem1 * 100 + rem2 * 10 + rem3;

    printf("\n Reverse number of %d is = %d \n", no, reverse);

    return 0;
}