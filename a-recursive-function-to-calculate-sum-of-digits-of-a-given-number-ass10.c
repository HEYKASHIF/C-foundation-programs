#include<stdio.h>
int sumdigit(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("Sum = %d",sumdigit(n));
    return 0;
}

int sumdigit(int n)
{
    if(n)
    {
        return(n%10)+sumdigit(n/10);
    }
}