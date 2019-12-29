// To find sum of odd number series starting from 1
// 1 3 5 7 ......99 series should look like this
#include<stdio.h>
int main()
{
    int n,avg;
    printf("Enter the last number of odd series:");
    scanf("%d",&n);
    avg=(1+n)/2;
    printf("Sum of series is %d",avg*avg);
}