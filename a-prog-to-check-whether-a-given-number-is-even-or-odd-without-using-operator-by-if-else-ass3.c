#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if((n/2)*2==n)
     printf("%d is a even number.",n);
    else
     printf("%d is a odd number.",n);
    return 0;
}