#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter nth number to print first n odd natural numbers = ");
    scanf("%d",&n);
    n=((n*2)-1);
    while(i<=n)
    {
        printf("\n%d",i);
        i+=2;
    }
    return 0;
}