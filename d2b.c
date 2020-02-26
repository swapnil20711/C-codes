// To convert decimal number to it's binary decimal=>binary
#include <stdio.h>
int main()
{
    int n, bin[32], i=0,j;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        bin[i]=n%2;
        n/=2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}