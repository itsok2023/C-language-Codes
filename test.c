#include <stdio.h>

//Function Declaration
int PrimeNumber(int);


int main()
{
    int num;
    int flag;

    printf("Enter a number to check Prime number or NOT : \n");
    scanf("%d", &num);

    // Function Calling
    flag = PrimeNumber (num);

    if (flag == 0)  
    {
        printf("Prime Number");
    }
    else{
        printf("NOT PRIME NUMBER");
    }

    return 0;
}

// Function Defination
int PrimeNumber(int num)
{
    int flag = 0;

    for (int i = 2; i <= (num / 2); i++)
    {
        if (num%i == 0)
        {
            flag++;
        }
        
    }
    
    return flag;

}