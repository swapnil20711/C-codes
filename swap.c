// To swap to two values without taking third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Original  numbers are x=%d y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swap  numbers are x=%d y=%d",x,y);
    return 0;
}
