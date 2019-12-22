// To find array element using binarysearch
#include<stdio.h>
int main()
{
    int a[6]={10,20,30,40,50,60},low=0,high=5,mid,i,found=0;// Declaration of array
    printf("Enter the item to search:");
    scanf("%d",&i);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==i)
        {
            found=1;
            break;
        }
        else if(a[mid]<i)
        { 
           low=mid+1;
        }
        else
        {
          high=mid-1;
        }
        
    }
    if(found==1)
    {
        printf("The element is at position %d",mid+1);
    }
    else
    {
        printf("Not found");
    }
    
}