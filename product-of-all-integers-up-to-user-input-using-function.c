#include<stdio.h>
int prod(int s)
{
    int pro=1;
    for(int i=1;i<=s;i++)
    pro*=i;
    printf("product = %d\n",pro);
    return 0;
}

int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    prod(n);
    return 0;
}
