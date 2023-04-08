// C program to find sum of digits using recursion.
#include <stdio.h>
int sum_of_digits(int number,int sum)
{
   if (number==0)
   {
       return sum ;
   }
   else
   {
       sum = sum + number%10 ;
       sum_of_digits(number/10,sum) ;
   }   
}
int main()
{
    int number,sum=0 ;
    printf("Enter a number = ") ;
    scanf("%d",&number) ;
    
    printf("%d",sum_of_digits(number,sum));

    return 0;
}