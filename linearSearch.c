//To find an array element
#include<stdio.h>
int main()
{
    int i,found,a[5]={10,20,30,40,50},E;//declaration of array
    printf("Enter the element to find:");
    scanf("%d",&E);
    for(i=0;i<5;i++)
    {
        if(E==a[i])
        {found=1;
        break;}
    }
    if(found==1)
    {
        printf("The element is at the position %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
