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
  int i1, i2;
  char c1, c2;
  float f1, f2;
  c1 = 'H';
  i1 = 80.56;			//here,float value converted to int so only 80 assigned to i1
  f1 = 12.5;
  c2 = i1;			//here,int converted to char so c2 has the character with ASCII value of '80' which is 'p'
  i2 = f1;			//here,float value converted to int so only 12 assigned to i2
  printf ("c2 = %c, i2 = %d\n", c2, i2);
  f2 = i1;			//here,int converted to float so 80.00 assigned to f2
  i2 = c1;			//here,char converted to int so i2 assigned ASCII value of character 'H' which is '72'
  printf ("f2 = %f, i2 = %d\n", f2, i2);
  return 0;
}
