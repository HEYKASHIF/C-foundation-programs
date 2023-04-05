#include<stdio.h>
int main()
{
    int a[10],i,sume=0,sumo=0;
    printf("Enter 10 numbers = ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
          sume=sume+a[i];
        else
          sumo=sumo+a[i];
    }
    printf("sum of even numbers = %d",sume);
    printf("\nsum of odd numbers = %d",sumo);
    return 0;
}