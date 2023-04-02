#include<stdio.h>
int arm(int n);
int main()
{
    int n,r;
    printf("Enter a number = ");
    scanf("%d",&n);
    r=arm(n);
    printf(r==1?"yes, armstrong":"no, not a armstrong");
    return 0;
}

int arm(int n)
{
    int N,r,c=0;
    for(N=n;N>0;N/=10)
    {
        r=N%10;
        c=c+(r*r*r);
    }
    if(c==n)
      return 1;
    else
      return 0;
}