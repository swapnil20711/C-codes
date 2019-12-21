/* TO PRINT NEGATIVE ELEMENTS OF AN ARRAY */
#include<stdio.h>
#define N 5
int main()
{
    int a[N],i;
    printf("Enter five numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
        
    }
    return 0;
}
