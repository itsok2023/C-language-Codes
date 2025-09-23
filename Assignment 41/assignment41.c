// Palindrome using Function

#include <stdio.h> //1

void Palindrome(int num); //4

int main() //2
{
    int num; //6
    printf("Enter the number to check Palindrome : ");
    scanf("%d", &num);

    Palindrome(num); //7

    return 0; //3
}

void Palindrome(int num) //5
{
    //8

    int reverse = 0;
    int copy = num;

    for ( ; copy > 0 ; )
    {
        reverse = (reverse * 10) + (copy % 10);
        copy = copy / 10; 
    }

    if (num == reverse)
    {
        printf("Number %d is Palindrome", num);
    }
    else
    {
        printf("Number %d is NOT Palindrome", num);
    }
    

}