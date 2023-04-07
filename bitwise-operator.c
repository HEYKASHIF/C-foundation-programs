#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k)
{
  int max_and=0 , max_or=0 , max_xor=0 ;
  for(int outer = 1 ; outer<n  ; outer++)
  {
      for(int inner = outer+1; inner<=n ; inner++)
      {
         int x=(outer&inner) ;
         int y=(outer|inner);
         int z=(inner^outer) ;
         if(z<k && z>max_xor)
         {
            max_xor = z ; 
         }    
         if(x<k && x>max_and)
         {
            max_and = x ; 
         }  
         if(y<k && y>max_or)
         {
            max_or = y ; 
         }   
      }
  }
  printf("%d\n",max_and) ;
  printf("%d\n",max_or) ;
  printf("%d\n",max_xor) ;
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}