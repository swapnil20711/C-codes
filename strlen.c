// To  calculate length of the string 
#include<string.h>
#include<stdio.h>
int main()
{
    char a[100],i=0;
    printf("Enter the string:");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("Length of string is %d",i);
return 0;
}