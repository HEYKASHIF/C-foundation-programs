// C program to find factorial of a number using recursion.

#include <stdio.h>
int factorial(int fact,int n)
{
    if(n == 1)
        return fact ;
    else
        factorial(fact*n,n-1) ;
}
int main()
{
    int n,fact=1;
    printf("Enter a number = ") ;
    scanf("%d",&n) ;
    fact = factorial(fact,n) ;
    printf("%d is the factorial",fact) ;
    return 0;
}