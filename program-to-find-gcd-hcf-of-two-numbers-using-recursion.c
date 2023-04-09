// C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>
int HCF(int lower, int upper,int temp) 
{
    if(temp>0)
    {
        if(lower%temp == 0 && upper%temp == 0)
            return temp ;
        else
            HCF(lower,upper,temp-1) ;
    }
}
int main()
{
    int lower , upper ; 
    printf("Enter lower number = ") ;
    scanf("%d",&lower) ;
    printf("Enter upper number = ") ;
    scanf("%d",&upper) ;
    int temp = upper ;
    temp = HCF(lower,upper,temp) ;  
    printf("HCF = %d",temp) ;
    return 0;
}