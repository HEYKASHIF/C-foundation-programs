#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    H=a>b?b:a;
    while(H>=1)
    {
        if(a%H==0&&b%H==0)
        {
            printf("HCF = %d",H);
            break;
        }
        H--;
    }
    return 0;
}