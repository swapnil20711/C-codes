// Addition without + operators
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    while (a != 0)
    {
        a--;
        b++;
    }
    printf("Sum is %d", b);
    return 0;
}