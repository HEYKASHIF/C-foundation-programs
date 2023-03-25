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
  int x = 5, y = 2;
  float p, q;
  p = x / y;
  printf ("p=%f\n", p);
  q = (float)x / y;
  printf ("q=%f\n", q);
  return 0;
}
