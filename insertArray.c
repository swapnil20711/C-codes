// TO insert elements in an array on desired position
#include<stdio.h>
int main()
{
    int a[100],i,s,p,n;
    printf("Enter the size of the array:");
    scanf("%d",&s);
    printf("Enter the array elements");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position and no.:");
    scanf("%d%d",&p,&n);
    printf("After insertion the array is\n");
    for(i=s+1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=n;
    for(i=0;i<s+1;i++)
    {
        printf("%d\n",a[i]);
    }
}
