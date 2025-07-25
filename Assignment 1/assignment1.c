// Calculate Simple Interest
//                              Formula :-
//                                          Simple Interest = ( Principle * Rate of Interest * Time Period ) / 100

#include <stdio.h>

int main()
{
    float principle, interest, time, simpleInterest;
    
    printf("Enter Value of Principle : ");
    scanf("%f",&principle);

    printf("Enter Value of Rate of Interest : ");
    scanf("%f",&interest);

    printf("Enter Value of Time Period : ");
    scanf("%f",&time);

    simpleInterest = (principle * interest * time ) / 100;

    printf("Simple Interest is : %f", simpleInterest);
    
    return 0;
}