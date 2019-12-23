// Program to add to matrix
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the number of rows and coloumns first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and coloumns second matrix:");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][r2],i,j;
    printf("Enter the elements of first matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:");
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1!=r2 || c1!=c2)
    {
        printf("Matrix cannot be added");
    }
    else 
    { 
       printf("Sum of two matrix is\n");
       for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }  
     }
    return 0;

}