#include<stdio.h>
int main()
{
    int n,i,fact = 1;
    printf("enter a number for factorial = ");
    scanf("%d" , &n);
    for(i=n; i>0; i--)
    fact*=i;
    printf("this is your factorial = %d\n" , fact);
}


