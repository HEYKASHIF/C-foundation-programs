#include<stdio.h>
int sumsquare(int n);
int main()
{
    int n;
    printf("Enter a number  = ");
    scanf("%d",&n);
    printf("Sum = %d",sumsquare(n));
    return 0;
}

int sumsquare(int n)
{
    if(n)
    {
        return(n*n)+sumsquare(n-1);
    }
}