// C program to find LCM of two numbers using recursion.
#include <stdio.h>
int LCM(int num1,int num2,int temp)
{
    if(temp<=num1*num2)
    {
        if(temp%num1==0 && temp%num2==0)
           return temp ;
        else
            LCM(num1,num2,temp+1) ;
    }
}
int main()
{
    int lower , upper ; 
    printf("Enter lower number = ") ;
    scanf("%d",&lower) ;
    printf("Enter upper number = ") ;
    scanf("%d",&upper) ;
    int temp = lower ;
    temp=LCM(lower,upper,temp) ;
    printf("LCM = %d",temp) ;
    return 0;
}