// Program to find the greatest among four numbers using if statements

#include <stdio.h>

int main()
{
    int a,b,c,d,great;

    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    printf("Enter 4th Number : ");
    scanf("%d",&d);

    great = a;

    if(b>great){
        great = b;
    }
    if(c>great){
        great = c;
    }
    if (d>great){
        great = d;
    }

    printf("The Greatest Number is %d",great);

    return 0;
}