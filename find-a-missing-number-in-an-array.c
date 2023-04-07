// C Program to find a missing number in an array of 1 to 100
#include <stdio.h>
int main()
{
    int size ;
    printf("Enter the size of array: ") ;
    scanf("%d",&size) ;
    
    int array[size-1] ;
    for(int i = 0 ; i<(size-1) ; i++)
    {
        scanf("%d",&array[i]) ;
    }
    for(int i = 0 ; i<(size); i++)
    { 
        if(i+1 != array[i])
        {
            printf("missing element is %d",i+1) ;
            break ;  
        }
        else 
          continue ;
    }   return 0;
}