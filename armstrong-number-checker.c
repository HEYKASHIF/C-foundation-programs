#include<stdio.h>
int main()
{
    int n,r,temp,mul,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        mul=r*r*r;
        sum+=mul;
        n/=10;
    }
    n=temp;
    if(n==sum)
     printf("your number is armstrong\n");
    else
     printf("your number is not a armstrong\n");
    return 0;
}