/* AUTHOR: Swapnil bhojwani
   DATE: 13/10/2019
   DESCRIPTION: To calculate operations between two operands  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char y;
  float a,b,c,d;//makes calculator more precise
 
  printf("Enter the first number\n");
  scanf("%f",&a);
  printf("Enter the second number\n");
  scanf("%f",&b);
  printf("Enter the operation:\n+\n-\n*\n/\n");
  scanf(" %c",&y);// Space before %c to have enter and then scan the character otherwise it will take enter as char & default case will run
 
  
 
   switch(y)
 {
   case '+': c=a+b; //Case label 1
          printf("ADDITION of two numbers is %f",c);
          break;
   case '-': c=a-b;
           printf("SUBTRACTION of two numbers is %f ",c);
           break;
   case '*': c=a*b;
           printf("MUTIPLICATION of two numbers is %f",c);
           break;
           
   case '/': d=a/b;
           printf("DIVISON of two numbers is %f ",d);
           break;
           
   default:
             printf("Invalid operator");
             break;
   }
      return 0;
  }
