//C program to print all Armstrong numbers between given interval.
#include <stdio.h>
#include <math.h>

int main()
{
    int lower,upper,count=0,sum=0 ;
    printf("Enter the lower limit = ") ;
    scanf("%d",&lower) ;
    printf("Enter the upper limit = ") ;
    scanf("%d",&upper) ;
    for(int i=lower ; i<=upper ; i++)
    {
        int temp = i ;
        while(temp)
        {
            temp = temp/10 ; 
            count++ ;
        }
        temp = i ;
        while(temp)
        {
            sum = sum+pow(temp%10,count);
            temp=temp/10 ;
        }
        if(sum == i)
        {
            printf("%d ",i) ;
        }
        count = 0 ;
        sum = 0 ;
        
    }

    return 0;
}