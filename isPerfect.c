/* Program:To check that the given number is perfect or not
   Author: Swapnil bhojwani
   Date:11/10/2019       */
#include <stdio.h>

int main()
{
  int i,count=0,n;
  printf("Enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++)//Can have maximum factor till n/2
    if(n%i==0)//Checking divisibility 
    {
      count=count+i;
    }
    if(count==n)
    {
      printf("The number is perfect");
    }
    else
    {
      printf("The number is not perfect");
    }
      return 0;
    }
