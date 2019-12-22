// To print roots of a quadratic equation by entering coefficient of x^2 & x and constant term
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Enter the coefficient of x^2 and x and constant term:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);// To claculate Discriminant 
    if(d>0)// real roots 
    {
        printf("Real and distinct roots exist & are %f and %f",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
    }
    else if(d==0)// real and equal
    {
        printf("Roots are real & equal and are %f & %f",(-b)/2*a,(-b)/2*a);
    }
    else// Imaginary roots
    {
        printf("Roots are imaginary");
    }
    
}
