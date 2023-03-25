/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,digits=0;
 printf("enter a number");
 scanf("%d",&n);
    do{
        n=n/10;
        digits=++digits;
     }while(n>0);
 printf("digits of your number = %d\n",digits);
 return 0;
}
