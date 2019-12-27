// To print array odd and even elements
#include<stdio.h>
int main()
{   int n,i;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
       printf("Even elements are\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\n");
    printf("Odd elements are\n");
        for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}