#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    printf(x%2?"odd":"even");
    return 0;
    
}