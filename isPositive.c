// To check whether the number is positive zero or negative
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive");
    }
    else if(n==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}