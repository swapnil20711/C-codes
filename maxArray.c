// To find the maximum array element
#include<stdio.h>
int main()
{
    int i,n,t,max;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));//scanf("%d",a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum array element is %d",max);
    return 0;

}