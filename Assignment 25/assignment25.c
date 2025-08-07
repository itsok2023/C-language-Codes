// Program to check whether the given number is a Prime Number or not

#include <stdio.h>

int main(){
    int num, i, count;

    printf("Enter any Integer Number : ");
    scanf("%d", &num);

    count = 0;
    i = 2;
    if(num == 1)
    {
        count++;
    }
    else
    {

        if(num == 2 )
        {
            count=0;
        }
        else
        {

            while( i <= num/2)
            {
                if(num % i == 0)
                {
                    count++;
                } 
                i++;
            }
        }
    
    }

    count > 0
    ? printf("It is NOT PRIME NUMBER")
    : printf("It is a PRIME NUMBER");

    return 0;
}