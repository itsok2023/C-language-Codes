// Create a program to print the Fibonacci series up to a certain number

#include <stdio.h>

int main(){
    printf("Welcome to Fibonacci Series\n");
    int num,a=0,b=1;
    printf("Enter number upto which series should be printed : ");
    scanf("%d", &num);

    printf("0 ");

    if (num > 1)
    {
        printf("1 ");
    }
    
    int sum;

    for (int i = 1; i <= num-2; i++)
    {
        sum = a + b;
        printf("%d ",sum);
        a = b;
        b = sum;
    }
    return 0;
}