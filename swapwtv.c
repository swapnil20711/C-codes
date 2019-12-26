// To swap using third variable
#include<stdio.h>
int main()
{
    int x,y,t;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Original numbers are x=%d y=%d\n",x,y);
    t=x;
    x=y;
    y=t;
    printf("Swap numbers are x=%d y=%d",x,y);
    return 0;
}