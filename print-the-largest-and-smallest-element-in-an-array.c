// C program to find the largest and smallest number in an array.
#include <stdio.h>
int main()
{
    int size ;
    printf("Enter the size of the array: ") ;
    scanf("%d",&size) ;
    int array[size] ;
    
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&array[i]) ;
    }
    
    
    int max = array[0] ;
    int min = array[0] ;
    
    
    
    for(int j=0 ; j<size ; j++)
    {
        if(array[j]>max)
        {
            max = array[j] ;
        }
        if(array[j]<min)
        {
            min = array[j] ;
        }
    }
    printf("%d is the maximum element of the array",max) ;
    printf("\n%d is the minimum element of the array",min) ;
    return 0;
}