//TO find area of circle using radius
#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area of circle is %f",area);
}