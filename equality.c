//program explaining use of ternary operators to compare two numbers

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two digits a & b to compare:");
    scanf("%d %d",&a,&b);
    a==b?printf("a is equal to b"):(a>b)?(printf("a is greater the b")) : (printf("a is less than b"));
    return 0;
}