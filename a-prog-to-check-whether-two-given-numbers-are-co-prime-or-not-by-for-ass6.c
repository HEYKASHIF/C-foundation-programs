#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd number = ");
    scanf("%d",&b);
    if(a>b)
    {
        for(i=2;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
            {
                count++;
                break;
            }
        }
    }
    else
    {
        for(i=2;i<=b;i++)
        {
            if(a%i==0&&b%i==0)
            {
                count++;
                break;
            }
        }
    }
    if(count>0)
     printf("Not are co-prime numbers");
    else
     printf("Yes, co-prime numbers");
    return 0;
}










