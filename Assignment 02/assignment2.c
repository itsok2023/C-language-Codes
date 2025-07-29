// Convert Celsius to Fahrenheit
//          Formula of Conversion :-
//                                              Farhenite = (9/5 * cel) + 32

#include <stdio.h>

int main()
{
    float cel, farh;

    printf("Enter value of Celsius : ");
    
    scanf("%f", &cel);

    farh = 9.0/5.0 * cel + 32;

    printf("Temperature in Fahrenheit is = %f F", farh);

    return 0;
}