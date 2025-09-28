// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function

#include <stdio.h>

void increment();

int main()
{
    int num;
    printf("Welcome to showing call by value");
    printf("\nPlease enter the number : ");
    scanf("%d", &num);

    printf("\n Before: Value of num is %d", num);
    increment(num);
    printf("\n Before: Value of num is %d", num);

    return 0;
}

void increment (int a) {
    printf("\n In Function Before: Value of num is %d", a);
    a++;
    printf("\n In Function Before: Value of num is %d", a);
}