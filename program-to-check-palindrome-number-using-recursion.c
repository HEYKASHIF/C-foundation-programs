// C program to check palindrome number using recursion.

#include <stdio.h>
int check_palindrome(int number,int temp2) 
{
    if(number==0)
    {
      return temp2 ;  
    }
    temp2 = (temp2*10)+(number%10) ;
    check_palindrome(number/10 , temp2) ;
}
int main()
{
    int number ;
    printf("Enter a number = ") ;
    scanf("%d",&number) ;
    int temp = number,temp2 = 0 ;
    temp2 =  check_palindrome(number,temp2) ;
    
    if(temp == temp2)
    {
        printf("%d is a palindrome number",temp) ;
    }
    else
    {
        printf("%d is not a palindrome number",temp) ;
    }
    
    
    return 0;
}