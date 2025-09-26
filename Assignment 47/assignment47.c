// Reverse of Array using Function

#include <stdio.h>

void ScanArray(int *, int);
void PrintArray(int *, int);
void ReverseArray(int *, int);

int main()
{
    int arr1[5];
    
    ScanArray(arr1, 5);
    ReverseArray(arr1, 5);
    PrintArray(arr1, 5);

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

void ReverseArray(int *ptr, int size)
{
    int i;
    int j = size-1;
    int temp;

    for ( i = 0; i < size/2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;

        j--;
    }
    
}