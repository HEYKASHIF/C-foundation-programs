// C program to print even or odd numbers in given range using recursion.

#include <stdio.h>
void even_odd(int lower,int upper) 
{
  if(lower > upper)
      printf("All numbers have printed") ; 
 else if(lower%2 == 0)
  {
    printf("Even = %d\n",lower) ;
    even_odd(lower+1,upper) ;
  }
  else
  {
    printf("odd = %d\n",lower) ;
    even_odd(lower+1,upper) ;
  }
}
int main()
{
    int lower,upper ;
    printf("Enter lower = ") ;
    scanf("%d",&lower) ;
    printf("Enter upper = ") ;
    scanf("%d",&upper) ;
    
    even_odd(lower,upper) ;

    return 0;
}