// To print ap series
#include<stdio.h>
int main()
{
    int a,n,d,i,t;
    printf("Enter the value of a,n and d:");// a is starting term,n is number of term,d is common difference
    scanf("%d %d %d",&a,&n,&d);
    printf("AP series is\n");
    for(i=1;i<=n;i++)
    {   
        t=a+(i-1)*d;
        printf("%d\t",t);
    }
    return 0;
}