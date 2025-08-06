// Program to accept a number from user and print numbers from 1 to that number

#include <stdio.h>
int main()
{
    int no,i;

    printf("Enter any number : ");
    scanf("%d", &no);

    for(i=1; i<=no; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}