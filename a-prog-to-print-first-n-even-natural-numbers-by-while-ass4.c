#include<stdio.h>
int main()
{
    int i=1,n,even=0;
    printf("Enter a program to print first n even natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",even);
        even+=2;
        i++;
    }
    return 0;
}