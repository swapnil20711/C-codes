// To check whether the year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if((year%400==0)||(year%100!=0&&year%4==0))
    {
        printf("The year is leap");
    }
    else
    {
        printf("The year is not leap");
    }
    return 0;
}