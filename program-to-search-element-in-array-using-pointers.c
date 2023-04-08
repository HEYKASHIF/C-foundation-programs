//C program to search element in array using pointers.
#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int size, searching_elem;
  printf ("Enter the Size of the Array = ");
  scanf ("%d", &size);
  int *ptr = malloc (size * sizeof (int));
  for (int i = 0; i < size; i++)
    {
      printf ("Enter %dth element of the array = ", i);
      scanf ("%d", &ptr[i]);
    }
  printf ("Enter the element that you want to search in the Array = ");
  scanf ("%d", &searching_elem);

  for (int i = 0; i < size; i++)
    {
      if (searching_elem == ptr[i])
	{
	  printf ("%d is present in the Array at %d index.", searching_elem,
		  i);
	  break;
	}
    }
  return 0;

}
