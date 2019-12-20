// To find maximum of two numbers using if-else
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else
    {
        printf("%d is greater",b);
    }
    return 0;
}