#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers to calculate sum of these numbers = ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    
    printf("%d",sum);
    return 0;
    
}

