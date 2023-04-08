// C program to find nth fibonacci term using recursion.
#include <stdio.h>
int fibonacci(int n,int a,int b,int c)
{
    if(n==0)
      return c ;
    c=a+b ;
    a=b ;
    b=c ;
    fibonacci(n-1,a,b,c) ;
}
int main()
{
    int n,a=0,b=1,c;
    printf("Enter the nth term of fibonacci series = ") ;
    scanf("%d",&n) ;
    
   printf("%d",fibonacci(n-2,a,b,c)) ;

    return 0;
}