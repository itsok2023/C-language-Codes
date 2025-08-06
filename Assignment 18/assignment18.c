// Program to accept 3 subject marks, check for failure, and assign grade based on percentage

#include <stdio.h>

int main()
{
    float java,dotnet,python,total;

    printf("Enter Marks of 1st subject (Java) : ");
    scanf("%f",&java);
    printf("Enter Marks of 2nd subject (.NET): ");
    scanf("%f",&dotnet);
    printf("Enter Marks of 3rd subject (PYTHON): ");
    scanf("%f",&python);

    if(java<35 || dotnet<35 || python<35){
        if(java<35){
            printf("\nFail in JAVA [Marks - %.2f] \n",java);
        }
        if(dotnet<35){
            printf("Fail in .NET [Marks - %.2f]\n",dotnet);
        }
        if(python<35){
            printf("Fail in PYTHON [Marks - %.2f]",python);
        } 
    }
    else
    {
        printf("\nCongratulations!!! You are PASS\n");
        total = (java + dotnet + python) * 100/300;
        printf("Total Percentage: %.2f%%\n", total);
        
        if(total>=65)
        {
            printf("Grade: A Grade");
        }
        else
        {
            if(total<65 && total>=60)
            {
                printf("Grade: B Grade");
            }
            else
            {
                printf("Grade: C Grade");
            }
        }
        
    }

    return 0;
}