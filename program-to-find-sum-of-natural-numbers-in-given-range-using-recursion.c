// C program to find sum of natural numbers in given range using recursion.
#include <stdio.h>
int sum_of_natural(int lower,int upper,int sum) 
{
    if(lower > upper)
      return sum ;
    else
    {
        sum = sum + lower ;
        sum_of_natural(lower+1 , upper,sum) ;
    }
}
int main()
{
    int lower,upper,sum=0;
    printf("Enter lower limit = ") ;
    scanf("%d",&lower) ;
    printf("Enter upper limit = ") ;
    scanf("%d",&upper) ;
    
    printf("%d",sum_of_natural(lower,upper,sum)) ;
    return 0;
}