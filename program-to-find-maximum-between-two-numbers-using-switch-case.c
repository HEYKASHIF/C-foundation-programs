// C program to find maximum between two numbers using switch case.
#include <stdio.h>
int main()
{
    int num1,num2 ;
    printf("Enter first number: ") ;
    scanf("%d",&num1) ;
    printf("Enter second number: ") ;
    scanf("%d",&num2) ; 
    switch(num1 > num2)
    {
        case 1 :
            printf("%d is greater",num1) ;
            break ;
        case 0 :
            printf("%d is greater",num2) ;
            break ;
        default :
            printf("numbers are equal") ;
    }
    return 0;
}