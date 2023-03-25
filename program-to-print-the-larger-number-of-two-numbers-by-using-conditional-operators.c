/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a, b, max;

  printf ("enter two numbers to comparision that which number is larger");

  scanf ("%d%d", &a, &b);

  max = a>b?a:b;

  printf ("larger number of %d and %d is %d", a, b, max);


  return 0;
}
