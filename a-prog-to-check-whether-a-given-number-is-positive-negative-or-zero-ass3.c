#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive");
    }
    if(n<0)
    {
        printf("negative");
    }
    if(n==0)
    {
        printf("zero");
    }
    return 0;
}