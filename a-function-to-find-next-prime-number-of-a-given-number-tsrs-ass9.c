#include<stdio.h>
int prime(int n);
int main()
{
    int n,r;
    printf("Enter a number = ");
    scanf("%d",&n);
    r=prime(n);
    printf("next prime number = %d",r);
    return 0;
}

int prime(int n)
{
    int a,i,count=0;
    for(a=n+1;a>n;a++)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
              count++;
        }
        if(count==2)
          return a;
        else
          count=0;
    }
}