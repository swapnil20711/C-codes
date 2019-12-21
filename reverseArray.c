/* NAME= SWAPNIL BHOJWANI
   PROGRAM= TO PRINT REVERSE OF AN ARRAY
   DATE= 26/10/2019       */
#include<stdio.h>
int main()
{
    int s[5],i;
    printf("Enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("ORIGINAL IS:\n");
    for(i=0;i<5;i++)
    {
      printf("%d\n",s[i]);
    }
    printf("REVERSE IS:\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
