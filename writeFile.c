// File handling
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
FILE *fp1,*fp2;
char ch;
fp1=fopen("D:\\c-codes\\ex.txt","r");
fp2=fopen("D:\\c-codes\\ex2.txt","w");
if(fp1==NULL || fp2==NULL)
{
    printf("File does not exist");
}
while(1)
{
    ch=fgetc(fp1);
    if(feof(fp1))
    {
        break;
    }
    fputc(ch,fp2);

}
fclose(fp1);
fclose(fp2);

return 0;
}