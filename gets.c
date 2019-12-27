// To show use of gets and puts
#include<stdio.h>
#include<strings.h>
int main()
{
    char a[100];
    puts("Enter the string:");
    gets(a);// scan the string with spaces unlike scanf
    puts(a);// prints the string
    return 0;
    
}