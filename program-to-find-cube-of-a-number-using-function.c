//C program to find cube of a number using function.
#include <stdio.h>
int cube(int number) 
{
   return number*number*number ; 
}
int main()
{
    int number ;
    printf("Enter a number = ") ;
    scanf("%d",&number) ;
    printf("%d",cube(number)) ;
    
    return 0;
}