// C program to find sum of even or odd number in given range using recursion.

#include <stdio.h>
void SUM_OF_EVEN_ODD(int lower,int upper,int sum_even,int sum_odd)
{
    if(lower>upper)
    {
        printf("Sum for odd numbers = %d\n",sum_odd) ;
        printf("Sum for even numbers = %d",sum_even) ;
    }
    else if(lower%2 == 0 )
    {
        sum_even = sum_even+lower ;
        SUM_OF_EVEN_ODD(++lower,upper,sum_even,sum_odd) ;
    }
    else 
    {
        sum_odd = sum_odd+lower ;
        SUM_OF_EVEN_ODD(++lower,upper,sum_even,sum_odd) ;
    }
}
int main()
{
    int lower,upper,sum_even=0,sum_odd=0 ;
    printf("Enter lower range = ") ;
    scanf("%d",&lower) ;
    printf("Enter upper range = ") ;
    scanf("%d",&upper) ;
    
    SUM_OF_EVEN_ODD(lower,upper,sum_even,sum_odd) ;
    return 0;
}