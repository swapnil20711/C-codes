// To calculate grades of ju students
#include <stdio.h>
int main()
{
    double insem1, insem2, endsem, attendance, assignment, total;
    printf("Enter the value of insem1,insem2,endsem,attendance,assignment marks respectively:\n");
    scanf( "%lf %lf %lf %lf %lf",&insem1, &insem2, &endsem, &attendance, &assignment);
    total = (0.3 * insem1) + (0.3 * insem2) + (0.5 * endsem) + (attendance) + (assignment);
    if (total >= 35)
    {
        printf("You crossed the danger zone by %lf number\n", (total - 35));
    }
    else
    {
        printf("You failed the exam by %lf number\n", (35 - total));
    }
    printf("Your total number out of 100 is %lf", total);

    return 0;
}