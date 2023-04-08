//C program to sort even and odd elements of array separately.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n ;
    printf("Enter the number of elements: ") ;
    scanf("%d",&n) ;
    
    int *array = malloc(n*sizeof(int)) ;
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: ",i) ;
        scanf("%d",&array[i]) ;
    }
    int *array2 = malloc(n*sizeof(int)) ;
    int j=0 ;
    int last=n-1; 
    for(int i=0 ; i<n ; i++)
    {
        if(array[i]%2 == 0)
        {
            array2[j] = array[i] ;
            j++ ;
        }
        else
        {
           array2[last] = array[i] ; 
           last-- ;
        }
    }
    for(int i=0 ; i<n; i++)
    {
        printf("%dth element of sorted array: %d\n",i,array2[i]) ;
    }
    return 0;
}