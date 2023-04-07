#include<stdio.h>
int
main ()
{
  float number = 0;
  float i = 0.01;
  printf ("Enter a number beta jii = ");
  scanf ("%f", &number);
  while (i * i < number)
  {
    i = i + 0.01;
  }
  printf ("square root of %f is %.2f", number, i);
  return 0;
}
