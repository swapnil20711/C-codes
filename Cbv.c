// Calling a function by value
#include<stdio.h>
int fun(int a ,int b)
{
    int x,y;
    x=20;
    y=10;
}
int main()
{
int x,y;
x=10;
y=20;
fun(x,y);
printf("x=%d y=%d",x,y);

}