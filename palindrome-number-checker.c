#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("Enter any number to check its a palindrome or not = ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    n=temp;
    if(n==sum)
     printf("you number is palindrome number");
    else
     printf("your number is not a palindrome number");
    return 0;
}