#include<stdio.h>
int main()
{
    int n,odd;
    printf("Enter nth number to print first n odd natural numbers in reverse order = ");
    scanf("%d",&n);
    n=((n*2)-1);
    while(n>=1)
    {
        printf("\n%d",n);
        n-=2;
    }
    return 0;
}