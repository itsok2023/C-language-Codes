// Create a program to sum all Odd numbers from 1 to a specified Number N

#include <stdio.h>

int main(){
    printf("Welcome to Sum of odd numbers \n");

    int num, i, sum;
    printf("Enter any number : ");
    scanf("%d", &num);

    i = 1;
    sum = 0;
    while(i<= num){
        sum += i;
        i += 2;
    }

    printf("Sum of odd number is %d", sum); 
    return 0;
}