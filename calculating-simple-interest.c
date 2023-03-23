
#include <stdio.h>
int
main ()
{
  float amount, rate, time, si;
  printf ("enter the the amount of simple interest");
  scanf ("%f", &amount);
  printf ("enter the rate");
  scanf ("%f", &rate);
  printf ("enter the time");
  scanf ("%f", &time);
  si = (amount * rate * time) / 100;
  printf ("this is your interest %f", si);
  return 0;

}
