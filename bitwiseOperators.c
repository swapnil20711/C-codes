// To perform bitwise operations
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("a|b=%d\n",a|b);// bitwise or operator
    printf("a&b=%d\n",a&b);// bitwise and operator
    printf("a^b=%d\n",a^b);// bitwise xor operator
    printf("~a=%d\n",~a);// bitwise  negation signed 
    printf("~a=%ud\n",~a);// bitwise  negation unsigned 
    printf("a>>1=%d\n",a>>1);// Right shift operator filled with zeros
    printf("a<<1=%d",a<<1);// Left shift operator filled with zeros
    return 0;
}