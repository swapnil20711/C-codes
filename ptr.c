// To define the use of pointer variables & dereference operators
#include<stdio.h>
int main()
{
    int q,*p=&q;
    printf("Enter the value of q:");
    scanf("%d",&q);
    printf("Address of q is:%x\n",p);
    printf("Value entered is %d",*p);//Dereference operators
    return 0;

}