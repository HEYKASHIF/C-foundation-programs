// C program to perform right rotation in array by 2 positions.

#include <stdio.h>

int main()
{
    int size ;
    printf("Enter the size of array: ") ;
    scanf("%d",&size) ;
    int array[size] ;
    for(int i = 0; i<size ; i++)
    {
       scanf("%d",&array[i]) ; 
    }
    int tempA=array[size-2] , tempB=array[size-1] ;
    for(int i=0 ; i<=1 ; i++)
    {
        for(int j=(size-3)+i ; j>=i; j--)
        {
            array[j+1]=array[j] ;
        }
    }
    array[0] = tempA ;
    array[1] = tempB ;
    
    for(int i=0 ; i<size ; i++)
    {
        printf("%d\t",array[i]) ;
    }

    return 0;
}