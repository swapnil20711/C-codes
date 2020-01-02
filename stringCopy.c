// To copy one string to another string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the string:");
    scanf("%s",&a);
    strcpy(b,a);
    printf("Copied string is %s",b);

}