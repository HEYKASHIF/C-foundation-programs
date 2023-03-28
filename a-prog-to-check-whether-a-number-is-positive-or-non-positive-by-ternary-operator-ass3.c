#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to check whether a number is positive or non-positive = ");
    scanf("%d",&x);
    printf(x>0?"positive":"non-positive");
    return 0;
}