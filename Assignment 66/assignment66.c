// Create a program to find the sum and average of all elements in an array.

#include <stdio.h>

int SumOfArray(int arr[], int size);

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = SumOfArray (arr, 10);
    float avg = sum / 10.0;

    printf("Sum of Array is : %d", sum);
    printf("\nAverage of Array is : %f",avg );

    return 0;
}

int SumOfArray(int arr[], int size)
{
    int add = 0;

    for (int i = 0; i < size; i++)
    {
        add = add + arr[i];
    }
    
    return add;
}