// To find sum of even series
// 2 4 6 8 10 ......100
#include<stdio.h>
int main()
{   int n,avg;
    printf("Enter the last digit of even series:");
    scanf("%d",&n);
    avg=(2+n)/2;
    printf("Sum of series is %d",avg*(avg-1));
    return 0;
}