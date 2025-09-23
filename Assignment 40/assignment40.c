// Prime number using Function

#include <stdio.h>

void Prime_Number(int num);

int main(){

    int num;
    printf("Enter a number to check Prime Number : ");
    scanf("%d", &num);

    Prime_Number(num);

    return 0;

}

void Prime_Number(int num)
{
    int count = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    
    count == 0 
        ? printf("Number %d is a Prime Number", num)
        : printf("Number %d is NOT Prime Number", num);
    
}