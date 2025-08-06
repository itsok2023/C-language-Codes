// Program to print the multiplication table of a number entered by the user

#include <stdio.h>
int main()
{
    int no, i;
    printf("Enter any number for Multipication Table : ");
    scanf("%d",&no);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", no, i, no*i);
    }

    return 0;
}