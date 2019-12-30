// To lower case the words of a string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n;
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {   if(a[i]>=65&&a[i]<97)
        {
        a[i]+=32;
        printf("%c",*(a+i));
        }
        else
        {
          printf("%c",*(a+i));
        }
        
    }
    return 0;
}