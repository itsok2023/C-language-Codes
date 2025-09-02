// Create a program to find the Greatest Common Divisor (GCD) of two integers

#include <stdio.h>
int main(){
    printf("Welcome to GCD Calculator \n");
    int first, second;
    printf("Please enter the first number : ");
    scanf("%d",&first);
    printf("Now, enter the second number : ");
    scanf("%d",&second);

    int min;
    int max;
    if(first < second){
        min = first;
        max = second;
    } else{
        min = second;
        max = first;
    }
    int i;
    for(i = min; i >= 1; i--){
        if(first % i == 0 && second % i == 0){
            printf("GCD of %d and %d is %d", first,second,i);
            break;
        }   
    }
    return 0;
}