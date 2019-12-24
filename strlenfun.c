// To find length of string using strlen function
#include<stdio.h>
#include<string.h>
int main()
{   char a[100];
    puts("Enter the string:");
    gets(a);
    printf("Length of string is %d",strlen(a));
    return 0;
}