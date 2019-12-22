// To print diamond pattern
#include<stdio.h>
int main()
{
    int i,k,l,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=n-i;l++)
        {
            printf("%c",32);
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }printf("\n");

    }
    
    for(i=n-1;i>=1;i--)
    {
        for(l=n-i;l>=1;l--)
        {
            printf("%c",32);
        }
        for(k=2*i-1;k>=1;k--)
        {
            printf("*");
        }printf("\n");
    }
    return 0;
}