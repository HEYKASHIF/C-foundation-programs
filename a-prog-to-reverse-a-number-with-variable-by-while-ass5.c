#include<stdio.h>
int main()
{
    int n,rev=0,ld=0;
    printf("Enter a number to do reverse of it number = ");
    scanf("%d",&n);
    int actual=n;
    while(n)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    printf("%d is the reverse of %d",rev,actual);
    return 0;
}