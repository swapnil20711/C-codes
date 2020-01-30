#include<stdio.h>
// To calculate average of stocks
float stocksAvg(float a[],int b[], int n)
{   int i;
    float Avg=0,Qty=0;
    printf("Enter the stock prize in  order:\n");
    for(i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
    printf("Enter the stock Quantity in  order:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        Avg+= a[i]*b[i];
    }
    for(i=0;i<n;i++)
    {
        Qty+=b[i];
    }
    Avg/=Qty;
    return Avg;

}
int main()
{
 int n,stocksQuantity[100];
 float stocksPrize[100],AvgStock;
 printf("Enter the number of enteries:");
 scanf("%d",&n);
 AvgStock= stocksAvg(stocksPrize,stocksQuantity, n);
 printf("%f is average of stocks",AvgStock);
 return 0;
}