// C Program to delete given element from array
#include <stdio.h>
int main()
{
    int size,delete,index ;
    printf("Enter the size of the array") ;
    scanf("%d",&size) ;
    
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&array[i]) ;
    }
    printf("Enter the element to delete from the array: ") ;
    scanf("%d",&delete) ;
    
    if(delete == array[size-1]) 
    {
        size = size-1 ;
        for(int i = 0 ; i<size ; i++)
        {
            printf("%d\t",array[i]) ;
        }
    }
    else
    {
        for(int i=0 ; i<size ; i++)
        {
            if(delete == array[i]) 
            {
                index = i ;
               break ; 
            }
        }
        for(int i = index ; i<size ; i++)
        {
            array[i] = array[i+1] ; 
        }
        for(int i = 0 ; i<(size-1) ; i++)
        {
            printf("%d\t",array[i]) ;
        }
    }
    return 0;
}