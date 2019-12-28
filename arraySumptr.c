// To find sum of array elements using pointer
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n],*p=a,sum=0;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("Sum is %d",sum);

}