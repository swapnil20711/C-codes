// To find sum of two numbers by a function
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    a=sum(x,y);
    printf("Sum is %d",a);
    return 0;

}
int sum(int a,int b)
{
    return a+b;
}