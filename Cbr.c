// Calling a function by reference
#include<stdio.h>
void fun(int *a,int*b)
{
    *a=20;
    *b=10;
}
int main()
{
    int a=10,b=20;
    fun(&a,&b);
    printf("a=%d b=%d",a,b);
}
