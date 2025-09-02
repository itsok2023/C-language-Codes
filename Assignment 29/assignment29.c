// Program to calculate the Least Common Multiple (LCM) of two numbers

#include <stdio.h>

int main(){
    printf("Welcome to LCM calculator \n");

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

    int mult = first * second;

    for(int i = min; i <= mult; i++){

     if(i % first == 0 && i % second == 0 ){
        printf("The LCM of %d  and %d is %d", first, second, i);
        break;
     }

    }

    return 0;

}