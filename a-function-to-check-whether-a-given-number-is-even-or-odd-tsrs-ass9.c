#include<stdio.h>
int check(int n)
{
    if(n&1)
     return 0;
    else
     return 1;
}

int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    int p=check(n);
    printf("%d",p);
    return 0;
}