#include<stdio.h>
int prime(int n);
int main()
{
    int n,r;
    printf("Enter a number = ");
    scanf("%d",&n);
    r=prime(n);
    printf(r==1?"prime number":"not prime number");
    return 0;
}

int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         count++;
    }
    if(count==2)
      return 1;
    else
      return 0;
}