// To reverse a given sentence
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,n;
    puts("Enter the sentence:");
    gets(a);
    n=strlen(a);
    printf("Reverse of the sentence is:");
    for(i=n;i>=0;i--)
    {
        printf("%c",*(a+i));
    }
    return 0;
}