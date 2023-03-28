#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    printf((x/2)*2==x?"your number is even":"your number is odd");
    return 0;
    
}