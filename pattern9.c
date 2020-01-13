//To print the pattern like this
/* Aa
   AaBb
   AaBbCc
   AaBbCcDdEe  */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c%c",j+65,j+97);
        }
        printf("\n");
    }
    return 0;
}
   
   