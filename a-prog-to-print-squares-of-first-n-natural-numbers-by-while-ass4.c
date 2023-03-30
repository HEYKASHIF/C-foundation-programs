#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter nth number to print squares of first n natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i*i);
        i++;
    }
    return 0;
}