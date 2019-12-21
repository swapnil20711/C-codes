// TO PRINT MAXIMUM OF FOUR NUMBERS USING FUNCTION
#include <stdio.h>
void max_of_four(int a,int b,int c,int d)
{   
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
        {
            printf("%d",a);
        }
            else 
           {
               printf("%d",d);
           }
        } 
        else
        {
            if(c>d)
            {
                printf("%d",c);
            }
            else
            {
                printf("%d",d);
            }
            
        }
        
    }
    else
    {
     if(b>c)
     {
         if(b>d)
         {
             printf("%d",b);
         }
         else 
         {
             printf("%d",d);
         }
     }
     else
     {
         if(c>d)
         {
             printf("%d",c);
         }
         else
         {
             printf("%d",d);
         }
         
     }
     
    }
}
int main() 
{
    int a, b, c, d;
    printf("Enter the four numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four( a, b, c, d);
    return 0;
}

