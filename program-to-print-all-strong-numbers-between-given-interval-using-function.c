// C program to print all strong numbers between given interval using function.
#include <stdio.h>
int main()
{
   int lower,upper,fact=1,sum=0 ;
   printf("Enter lower limit: ");
   scanf("%d",&lower) ;
   printf("Enter upper limit: ");
   scanf("%d",&upper) ;
   
   for(int i=lower ; i<=upper; i++)
   {
       for(int j=i ; j>0 ;j=j/10)
       {
           fact = 1 ;
           for(int f = 1 ; f<=j%10 ; f++)
           {
              fact=fact*f ; 
           }
           sum = sum + fact ;
        }
       if(i == sum)
       { 
         printf("%d ",i) ;
       } 
       sum = 0 ;
   }
   return 0;
}