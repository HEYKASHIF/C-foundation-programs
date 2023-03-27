#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number to check its a prime or not = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         count++;
    }
    if(count==2)
     printf("your number is prime number");
    else
     printf("your number is not a prime number");
    return 0;
}