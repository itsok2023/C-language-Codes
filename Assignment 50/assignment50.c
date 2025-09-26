// Reverse of an Array

#include <stdio.h>

int main()
{
    int arr[5], i = 0, temp;

    printf("Enter 5 numbers : \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 4;

    printf("Reverse of array as : \n");

    for ( i = 0; i < 5/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        j--;
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    

    return 0;
}