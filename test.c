#include <stdio.h>

void StringCopy (char *ptr1, char *ptr2);

int main() {
    char str1 [100];
    char str2 [100];
    printf("Enter a string : ");
    scanf("%s",str1);
    
    StringCopy (str1, str2);
    printf("Copy string of %s is %s", str1, str2);
    return 0;
}

void StringCopy (char *ptr1, char *ptr2)
{
    int i;
    for (i=0; ptr1[i] != '\0'; i++)
    {
        ptr2[i] = ptr1[i];
    }

    ptr2[i] = '\0';
}
