// To multiply two matrix
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the rows and coloumns of first matrix\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and coloumns of second matrix\n");
    scanf("%d %d", &r2, &c2);
    int a[r1][c1], b[r2][c2], res[c1][c2], i, j, k, sum = 0;
    if (c1 == r2)
    {
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Result is\n");
        for (i = 0; i < c1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                res[i][j] = sum;
                sum = 0;
            }
            printf("\n");
        }
        for (i = 0; i < c1; i++)

        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix cannot be multiplied");
    }
    return 0;
}