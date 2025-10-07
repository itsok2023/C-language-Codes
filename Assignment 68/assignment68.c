// Create a program to find the maximum and minimum element in an array.

#include <stdio.h>

int Maximum(int *, int);
int Minimum(int *, int);

int main()
{
    int arr[5];
    int max, min;

    printf("\nEnter 5 numbers in Array : \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = Maximum(arr, 5);
    min = Minimum(arr, 5);

    printf("\nMaximum Value in Array is : %d\n", max);
    printf("\nMinimum Value in Array is : %d\n", min);
    
    return 0;
}

int Maximum(int *ptr, int size )
{
    int i = 0;
    int max = ptr[i];
    
    for ( i = 0; i < size; i++)
    {
        if (max < ptr[i])       
        {
            max = ptr[i];
        }
        
    }

    return max;
    
}

int Minimum(int *ptr, int size)
{
    int i = 0;
    int min = ptr[i];

    for ( i = 0; i < size; i++)
    {
        if (min > ptr[i])
        {
            min = ptr[i];
        }
        
    }

    return min;
    
}