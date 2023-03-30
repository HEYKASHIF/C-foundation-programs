#include<stdio.h>
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    printf(n==0?"zero":n>0?"positive":"negative");
    return 0;
}