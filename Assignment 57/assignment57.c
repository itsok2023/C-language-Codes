// Call a function get_average that takes five int numbers and returns the average

#include <stdio.h>

float get_average(int, int, int, int , int);

int main()
{
    int a, b, c, d, e;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    printf("Enter fourth number : ");
    scanf("%d", &d);
    printf("Enter fifth number : ");
    scanf("%d", &e);

    float avg = get_average(a, b, c, d, e);

    printf("Average of 5 numbers is : %.2f", avg);

    return 0;
}

float get_average(int n1, int n2, int n3, int n4, int n5)
{
    float avg = (n1 + n2 + n3 + n4 + n5) / 5;
    
    return avg;
}