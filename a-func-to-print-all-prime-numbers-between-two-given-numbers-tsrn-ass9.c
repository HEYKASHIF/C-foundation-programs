#include<stdio.h>
void prime(int a, int b);
int main()
{
    int a,b;
    printf("Enter starting number = ");
    scanf("%d",&a);
    printf("Enter last number = ");
    scanf("%d",&b);
    prime(a,b);
    return 0;
}

void prime(int a, int b)
{
    int n,i,count=0;
    for(n=a+1;n<b;n++)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
              count++;
        }
        if(count==2)
          printf("\t%d",n);
        count=0;
    }
}

