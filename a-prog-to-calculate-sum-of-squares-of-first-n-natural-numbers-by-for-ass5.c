#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     sum=sum+(i*i);
    printf("%d",sum);
    return 0;
}