#include<stdio.h>
int
main ()
{
  int number;
  printf ("enter a number to cheak\n");
  scanf ("%d", &number);
  if (number % 2 == 0)
    printf ("your number is even %d\n", number);
  else 
    printf ("your number is odd %d\n", number);
    return 0;
}


