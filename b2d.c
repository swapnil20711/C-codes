// To convert binary=>decimal
#include <stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n, r,dec=0,i=0;
    printf("Enter the binary number\n");
    scanf("%llu", &n);
    printf("Decimal of %llu is ",n);
    while (n != 0)
    {
         r = n%10;
         dec+= r*pow(2,i);
         n/=10;
         i++;
    }
    printf("%llu ",dec);

    return 0;
}