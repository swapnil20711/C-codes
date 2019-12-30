// To concatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter two strings:");
    scanf("%s %s",&a,&b);
    strcat(a,b);
    printf("The strings after concatenation is %s",a);
    return 0;

}