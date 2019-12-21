#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int a[MAXSIZE], b[MAXSIZE];
    int n, i,j;
    printf("Enter the array size:");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } 
    printf("Copied elements are\n");
        for(i=0;i<n;i++)
    {

        for(j=i;j<=i;j++)
        {
        b[j]=a[i];
        printf("%d\n",b[j]);
        }
    }
    return 0;
}
