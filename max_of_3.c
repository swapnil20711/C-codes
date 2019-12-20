// program to explain use of ternary operators to find maximum of three numbers 
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the values of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    max= a>b?(a>c?a:c):(b>c?b:c);//ternary operators to find max
    printf("Maximum of three numbers is %d",max);
    return 0;
}
