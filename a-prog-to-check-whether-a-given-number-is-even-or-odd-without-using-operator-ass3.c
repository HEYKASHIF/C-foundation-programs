#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter a number = ");
    scanf("%d",&n);
    c=(n/2)*2;
    if(c==n)
    {
        printf("even");
    }
    if(c!=n)
    {
        printf("odd");
    }
    return 0;
}