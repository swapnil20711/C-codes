// Null pointers in c
#include <stdio.h>
int main()
{
    int *i, *j;
    int *p = NULL, *q = NULL;
    if (i == j)
    {
        printf("This might get printed if both i and j are same by chance.\n");
    }
    if (p == q)
    {
        printf("This is always printed coz p and q are same.\n");
    }
    printf("%d", p);
    return 0;
}