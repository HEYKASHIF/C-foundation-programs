#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }
    
    if(n<=0)
    {
        printf("Non-Positive");
    }
    return 0;
}