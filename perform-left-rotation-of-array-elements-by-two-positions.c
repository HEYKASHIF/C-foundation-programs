// C program to perform left rotation of array elements by two positions.
#include <stdio.h>

int main()
{
    int size ;
    printf("Enter the size of the array: ") ;
    scanf("%d",&size) ;
    
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter %dth element: ",i) ;
        scanf("%d",&array[i]) ;
    }
    
    int tempA = array[0] , tempB = array[1] ;
    for(int j=1 ; j>=0 ; j--)
    {
        for(int i=j ; i<size; i++)
        {
            array[i] = array[i+1] ; 
        }
    }
    array[size-2] = tempA ;
    array[size-1] = tempB ;
    
    for(int i=0 ; i<size ; i++)
    {
      printf("%dth element is %d\n",i, array[i]) ;  
    }
    return 0;
}