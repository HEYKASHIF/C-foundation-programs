#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether a number even or odd = ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even");
    }
    if(n%2!=0)
    {
        printf("odd");
    }
    return 0;
}