// To find transpose of a given matrix
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the value of rows & coloumns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the array elements:");
    getchar();
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix is \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    printf("Transpose of matrix is\n");
      for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }printf("\n");
    }
    return 0;
}