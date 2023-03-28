#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether a number is divisible by 5 or not = ");
    scanf("%d",&n);
    if((n%5)==0)
    {
        printf("yes,divisible");
    }
    if((n%5)!=0)
    {
        printf("not-divisible");
    }
    return 0;
}