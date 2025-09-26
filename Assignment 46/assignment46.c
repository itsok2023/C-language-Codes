// Add two Array Using Function and Print it 

#include <stdio.h>

void ScanArray(int *, int);
void SumOfTwoArray(int *, int *, int *, int);
void PrintArray(int *, int);

int main()
{
    int arr1[5], arr2[5], arr3[5];
    
    ScanArray(arr1, 5);
    ScanArray(arr2, 5);

    SumOfTwoArray(arr1, arr2, arr3, 5);
    PrintArray(arr3, 5);

    return 0;
}

void ScanArray(int *ptr, int size)
{
    int i;
    printf("Enter the %d numbers : ", size);
    
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int *ptr, int size)
{
    int i = 0;
    
    for ( i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    
}

void SumOfTwoArray(int *ptr1, int *ptr2, int *ptr3, int size)
{
    int i = 0;

    for ( i = 0; i < size; i++)
    {
        ptr3[i] = ptr1[i] + ptr2[2];
    }
    
}