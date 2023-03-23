#include<stdio.h>
int
main ()
{
  int number;
  printf ("enter the number to cheak its nature");
  scanf ("%d", &number);
  if (number < 0)
  printf ("your number is negative %d", number);
  else
  printf("your number is positive %d", number);
  return 0;

}
