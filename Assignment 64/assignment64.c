// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.

#include <stdio.h>

int main(){
    const float MILES_PER_KM = 0.621371;
    long kms;
    printf("Welcome to Distance converter.\n");

    printf("Please enter the kms : ");
    scanf("%ld", &kms);

    long miles = kms * MILES_PER_KM;
    printf("The number of miles are %ld", miles);


    return 0;
}