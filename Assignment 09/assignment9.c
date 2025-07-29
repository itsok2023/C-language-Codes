// Program to calculate percentage and check pass or fail status

#include <stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float percentage;

    printf("Enter Marks of 5 Subjects:- (Out of 100) \n");

    printf("Subject 1 : ");
    scanf("%d",&sub1);
    printf("Subject 2 : ");
    scanf("%d",&sub2);
    printf("Subject 3 : ");
    scanf("%d",&sub3);
    printf("Subject 4 : ");
    scanf("%d",&sub4);
    printf("Subject 5 : ");
    scanf("%d",&sub5);

    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) * 100 / 500;

    printf("Percentage is %.2f\n",percentage);

    (percentage<60)
        ? printf("SORRY!!! You are FAIL")
        : printf("CONGRATULATIONS!!! You are PASS");

    return 0;

}