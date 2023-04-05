#include<stdio.h>
int sumeven(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("sum = %d",sumeven(n));
    return 0;
}

int sumeven(int n)
{
    if(n)
    {
        return(2*n)+sumeven(n-1);
    }
}