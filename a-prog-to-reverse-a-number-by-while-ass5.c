#include<stdio.h>
int main()
{
    int n,rev;
    printf("Enter a number to reverse it = ");
    scanf("%d",&n);
    while(n>0)
    {
        rev=n%10;
        printf("%d",rev);
        n/=10;
    }
    return 0;
}