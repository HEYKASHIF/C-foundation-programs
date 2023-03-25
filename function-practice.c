/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void find(int n);
int main()
{  
    int num;
    printf("enter a value to cheak =");
    scanf("%d",&num);
    find(num);
    return 0;
}

void find(int n)
{
    if(n % 2 == 0)
     printf("your value is even ");
    else
     printf("your value is odd ");
}