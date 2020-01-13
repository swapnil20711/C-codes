/* To print pattern like this 
 n
 ni
 nic
 nice
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, j;
    char a[50];
    printf("Enter the string:");
    scanf("%[^\n]", a); //To scan the string
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}