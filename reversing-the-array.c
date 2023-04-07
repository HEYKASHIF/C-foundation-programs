#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    int array[num] ;
    for (int i=0; i<num; i++) 
    {
        scanf("%d",&array[i]) ;
    }
    
    for (int i=(num-1); i>=0; i--) 
    {
        printf("%d ",array[i]) ;
    }
    return 0;
}