#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    printf(x%5?"not divisible by 5":"divisible by 5");
    return 0;
}