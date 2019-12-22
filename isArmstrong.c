// To check whether the number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,count=0,t,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    t=n;//copy n to another variable
    while(n>0)
    {
        n/=10;
        count++;
    }
    n=t;// obtaining the original value of n
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);      
        n/=10;
    }
    if(sum==t)//n becomes 0 so we are checking for t
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
    return 0;
}