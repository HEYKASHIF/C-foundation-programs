#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        sum=sum+(n*n*n);
    }
    printf("%d",sum);
    return 0;
}