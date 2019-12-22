// Function to swap two numbers using call by reference
#include<stdio.h>
void swap(int *p,int *q)//Collecting addresses in pointer variable
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int main()
{
    int a,b;
    printf("Enter the  two numbers:");
    scanf("%d%d",&a,&b);
    printf(" Before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);// passing address to the function
    printf(" After swapping a=%d b=%d",a,b);
    return 0;
}
  
    

 
    
    
