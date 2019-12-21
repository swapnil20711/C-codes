/*
 ============================================================================
 Name        : Triangle
 Author      : Swapnil bhojwani
 Description :This will print the pattern as commented below
 ============================================================================
 */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			printf("*");
		}printf("\n");
}}
//It will print like this 
/* *****
    ****
     ***
      **
       *       */
