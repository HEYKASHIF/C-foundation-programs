/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1,n,sum=0;
    printf("enter a nth term = ");
    scanf("%d",&n);
    do
    {sum=sum+i;
        i++;
    }while(i<=n);
    
    printf("the sum of series upto %d is = %d\n",n,sum);
    return 0;
}

