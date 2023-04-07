// C program to find second largest number in an array
#include <stdio.h>

int main()
{
    int size ;
    printf("Enter the size of the array: ") ;
    scanf("%d",&size) ;
    int array[size] ;
    
    for(int i=0 ; i<size; i++) 
    {
        scanf("%d",&array[i]) ;
    }
    int temp = array[0] ;
    for(int outer=0 ; outer<size ; outer++)
    {
        for(int inner=0 ; inner<size ; inner++)
        {
            if(array[outer]<array[inner])
            {
                temp = array[outer] ;
                array[outer] = array[inner] ;
                array[inner] = temp ;
            }
        }
    }
    printf("The second largest element is %d",array[size-2]) ;
    
    return 0;
}