// To print rhombus pattern
#include<stdio.h>
int main()
{
    int i,m,k,l,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=n-i;l++)
        {
            printf("%c",32);
        }
        for(k=1;k<=n;k++)
        {
         for(m=1;m<=n;m++)
         {
             printf("*");
         }
        }
        printf("\n");
    }
    return 0;
}