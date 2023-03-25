/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int  n,i,fact=1;
     
    printf("enter the digit to calculate factorial = ");
    
    scanf("%d" , &n );
    
    for(i=n;i>0;i--)
    {
    fact=fact*i;
    }
    printf("your factorial is %d " , fact);

    return 0;
}
