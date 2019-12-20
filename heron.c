// To find area of triangle of sides a,b,c
#include<stdio.h>
#include<math.h>
int  main()
{
    float a,b,c,s,area;
    printf("Enter the sides of a triangle");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("%f",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));//heron's formula
    printf("Area of given triangle is %f",area);
    return 0;

}