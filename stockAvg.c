#include <stdio.h>
// To calculate average of stocks
float stocksAvg(float a[], int b[], int n)
{
  int i;
  float Avg = 0, Qty = 0;
  printf("Enter the stock prize & stock quantity in  order:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &a[i]);
    scanf("%d", &b[i]);
  }
  for (i = 0; i < n; i++)
  {
    Avg += a[i] * b[i];
  }
  for (i = 0; i < n; i++)
  {
    Qty += b[i];
  }
  printf("Total share prize is %f\n",Avg);
  Avg /= Qty;
  printf("%f is Quantity\n", Qty);
  return Avg;
}
int main()
{
  int n, Qty;
  float  AvgStock;
  printf("Enter the number of enteries:");
  scanf("%d", &n);
  int stocksQuantity[n];
  float stocksPrize[n];
  AvgStock = stocksAvg(stocksPrize, stocksQuantity, n);
  printf("%f is average of stocks", AvgStock);
  return 0;
}