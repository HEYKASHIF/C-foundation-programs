#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number to count their digits = ");
    scanf("%d",&n);
    while(n>0)
    {
        count++;
        n/=10;
    }
    printf("\ndigits = %d",count);
    return 0;
}