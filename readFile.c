#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("D:\\c-codes\\ex.txt","r");
if(fp==NULL)
{
    printf("File does not exist");
}
while(!feof(fp))
{
    ch=fgetc(fp);
    putchar(ch);
}
fclose(fp);
return 0;
}