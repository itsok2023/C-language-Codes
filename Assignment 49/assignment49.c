// Search data from Array

#include <stdio.h>

int main()
{
    int arr[5], i, flag = 0, data;

    printf("Enter a number to find : ");
    scanf("%d", &data);

    printf("Enter 5 numbers : ");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == data)
        {
            flag++;
        }
        
    }

    (flag == 0) ? printf("Data NOT FOUND")
                : printf("Data FOUND");
    
    return 0;
}