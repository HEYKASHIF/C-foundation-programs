#include<stdio.h>
int main()
{
    int sum=0,n,i=1;
    printf("Enter nth number to calculate sum of first n natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    
    printf("\nsum of first %d natural numbers is = %d",n,sum);
    return 0;
}