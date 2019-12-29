// To reverse a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n;
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    printf("Reverse of the string is:");
    for(i=n;i>=0;i--)
    {
        printf("%c",*(a+i));
    }
    return 0;
}