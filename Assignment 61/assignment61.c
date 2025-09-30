// Write a program to change the value of an integer variable using a pointer and the * operator

#include <stdio.h>

int main(){
    int num = 6;
    int *ptr = &num;

    *ptr = 87;
    printf("Value of num is : %d", num);
    return 0;
}