// C program to find minimum elements in array using recursion.
#include <stdio.h>
int min(int array[],int size,int MIN) 
{
  if(size>-1)
  {
      if(array[size]<MIN)
      {
        MIN = array[size] ;
      }
      min(array,size-1,MIN) ;
  }
  else
    return MIN ;
}
int main()
{
    int size = 4 ;
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter %dth element = ",i) ;
        scanf("%d",&array[i]) ;
    }
    int MIN = array[0] ;
    MIN = min(array,size-1,MIN) ;
    printf("%d is the minimum element",MIN) ;
    return 0;
}