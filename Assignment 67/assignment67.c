// Create a program to find the number of occurrence in the array

#include <stdio.h>

int NoOfOccurrence (int *, int, int);

int main()
{
    int num;
    printf("Enter any Number To find Occurrence : ");
    scanf("%d", &num);

    int arr[10];
    
    printf("\nNow Enter the Array : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int occurrence = NoOfOccurrence(arr, 10, num);
    
    printf("The Occurrence of number in it is : %d", occurrence);

    return 0;
}

int NoOfOccurrence(int *ptr, int size, int num)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] ==  num)
        {
            flag++;
        }
        
    }

    return flag;
    
}