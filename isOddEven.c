// To check whether the number is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
       printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}