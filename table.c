/* NAME= SWAPNIL BHOJWANI
   PROGRAM= TO PRINT TABLE OF ANY NUMBER
   DATE=26/10/2019     */
    
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
