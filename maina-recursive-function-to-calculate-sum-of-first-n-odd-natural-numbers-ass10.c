#include<stdio.h>
int sumodd(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("sum = %d",sumodd(n));
    return 0;
}

int sumodd(int n)
{
    if(n)
    {
        return(2*n-1)+sumodd(n-1);
    }
}