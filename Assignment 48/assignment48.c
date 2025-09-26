// Addition of Array

#include <stdio.h>

int main()
{
    int arr[5];
    int res = 0;

    printf("Enter 5 Numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        res = res + arr[i];
    }

    printf("The total addition of numbers in array is : %d", res);
    

    return 0;
}