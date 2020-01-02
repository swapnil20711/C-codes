/* NAME= ARRAY PROGRAM
   AUTHOR= SWAPNIL BHOJWANI
   DESCRIPTION= TO PRINT THE ARRAY ELEMENT     */
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5],i;
    //Test comment
    printf("Enter five numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" Your 2 element is %d",arr[1]);
    return 0;

}
