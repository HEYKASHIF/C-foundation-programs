//C program to find ones complement of a binary number.
#include <stdio.h>
int main()
{
    int array[8] ;
    printf("Enter a binary number in 8 bit = ") ;
    for(int i=0 ; i<8 ; i++)
    {
        scanf("%d",&array[i]) ;
    }
    for(int i=0 ; i<8 ; i++)
    {
        if(array[i]==0)
            array[i] = 1;
        else
            array[i] = 0;
    }
    for(int i=0 ; i<8 ; i++)
    {
        printf("%d ",array[i]) ;
    }

    return 0;
}