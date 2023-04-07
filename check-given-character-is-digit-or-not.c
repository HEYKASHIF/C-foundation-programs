#include<stdio.h>
int
main ()
{
  char character;
  printf ("Enter any character miss anki = ");
  scanf ("%c", &character);
  if ((48 <= (int)character) && (57 >= (int)character))
    printf ("your character is digit. ");
  else
    printf ("your character is not digit. ");

  return 0;
}
