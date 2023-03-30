#include<stdio.h>
int main()
{
    int n,nu,rem=0,sum=0;
    printf("Enter a number to calculate sum of digits of that number = ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}