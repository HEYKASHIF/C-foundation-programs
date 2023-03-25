/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    printf("enter a number ");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
       rem=n%10;
        sum=sum+rem;
       
    }
  printf("sum of digits = %d\n",sum);
    return 0;
}
