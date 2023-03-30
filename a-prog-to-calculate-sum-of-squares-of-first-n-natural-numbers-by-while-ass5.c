#include<stdio.h>
int main()
{
    int i=1,n,square,sum=0;
    printf("Enter nth number to calculate sum of squares of first n natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        square=i*i;
        sum=sum+square;
        i++;
    }
    
    printf("sum of squares of first n natural numbers = %d",sum);
    return 0;
}