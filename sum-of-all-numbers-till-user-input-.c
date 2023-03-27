#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any number = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    sum+=i;
    printf("sum from 0 to %d = %d",n,sum);
    return 0;
}