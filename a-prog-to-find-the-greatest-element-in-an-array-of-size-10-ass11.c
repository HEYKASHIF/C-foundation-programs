#include<stdio.h>
int main()
{
    int a[10],i,g;
    printf("Enter 10 numbers = ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    g=a[0];
    
    for(i=0;i<=9;i++)
    {
        if(a[i]>g)
          g=a[i];
    }
    
    printf("greatest number is %d",g);
    return 0;
}