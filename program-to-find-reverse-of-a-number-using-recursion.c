//C program to find reverse of a number using recursion. 
#include <stdio.h>
int reverse(int n,int new) ;
int main()
{
    int n,new=0;
    printf("Enter a number = ");
    scanf("%d",&n) ;
    printf("%d",reverse(n,new)) ;
    return 0;
}
int reverse(int n,int new)
{
    if(n == 0)
    return new ;
    new = (new*10) + n%10 ;
    reverse(n/10,new) ;
}