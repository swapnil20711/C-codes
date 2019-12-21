/* NAME=SWAPNIL BHOJWANI
   PROGRAM=TO FIND SUM OF ARRAY NUMBERS
   DATE=26/10/2019       */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arr[100],i,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum= sum + arr[i];
    }
    printf("Sum of the array numbers is %d",sum);
    return 0;

}

