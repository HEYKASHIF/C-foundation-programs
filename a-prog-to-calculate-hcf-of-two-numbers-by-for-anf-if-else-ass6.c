#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(H=a;H>=1;H--)
        {
            if(a%H==0&&b%H==0)
            {
                printf("HCF = %d",H);
                break;
            }
        }
    }
    else
    {
        for(H=b;H>=1;H--)
        {
            if(a%H==0&&b%H==0)
            {
                printf("HCF = %d",H);
                break;
            }
        }
    }
    
    return 0;
}




