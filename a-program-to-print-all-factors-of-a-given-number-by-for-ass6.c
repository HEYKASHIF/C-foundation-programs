#include<stdio.h>
int main()
{
    int i,n;
    printf("ENter a number to find its all factors = ");
    scanf("%d",&n);
    printf("factors = ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         printf("%d\t",i);
    }
    return 0;
}
