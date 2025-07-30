// Program to check whether a given year is a Leap Year

#include <stdio.h>

int main()
{
    int year; 

    printf("Enter any year : "); 

    scanf("%d",&year); 

    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        ? printf("%d is LEAP YEAR",year) 
        : printf("%d is NOT LEAP YEAR",year); 

    return 0;
}