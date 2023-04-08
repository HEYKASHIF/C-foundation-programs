//C program to find reverse of a number.
#include <stdio.h>
int main()
{
    int n,new=0;
    printf("Enter a number = ");
    scanf("%d",&n) ;
    while(n)
    {
       new = (new*10)+(n%10) ;
       n = n/10 ;
    }
    printf("%d",new) ;
    return 0;
}