// To delete  an array element.
#include<stdio.h>
int main()
{
    int a[100],i,s,p;
    printf("Enter the size of the array:");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
printf("Enter the position of the element to delete:");
scanf("%d",&p);
for(i=p;i<=s;i++)
{
    a[i-1]=a[i];
}
s--;//To decrease the size of array by 1
printf("After deletion array looks like this\n");
for(i=0;i<s;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}
