// To find profit & loss using sp & cp 
#include<stdio.h>
int main()
{
    float sp,cp;
    printf("Enter the selling and cost price ");
    scanf("%f%f",&sp,&cp);
    if(sp>cp)
    {
        printf("You are in profit of %f rupees ",sp-cp);
    }
    else if(sp==cp)
    {
        printf("You are neither in loss nor in profit");
    }
    else
    {
   printf("You are in loss of %f rupees",cp-sp);
    }
    return 0;
}