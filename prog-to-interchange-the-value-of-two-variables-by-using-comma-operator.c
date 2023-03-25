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
  int a = 15, b = 41, tempo;
  printf ("a=%d, b=%d\n", a, b);
  tempo = a, a = b, b = tempo;
  printf ("a=%d, b=%d\n", a, b);

  return 0;
}
