// To find factorial of a given number
#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of %d is %d",i,fact);
    return 0;
}
