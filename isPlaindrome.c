// To check whether the number is plaindrome or not
#include<stdio.h>
int main()
{
    int r,n,sum=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
    if(temp==sum)
    {
        printf("Number is plaindrome");
    }
    else
    {
        printf("Number is not plaindrome");
    }
    return 0;
    
}