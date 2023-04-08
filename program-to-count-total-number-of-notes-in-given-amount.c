//C program to count total number of notes in given amount.
#include <stdio.h>
int main()
{
    int amount ; 
    printf("Enter the amount: ") ;
    scanf("%d",&amount) ;
    if(500 <= amount)
    {
      int fiveh = amount/500 ;  
      amount = amount%500 ;
      printf("500 = %d\n",fiveh) ;
    }
    if(100 <= amount)
    {
       int oneh = amount/100 ;
       amount = amount%100 ;
       printf("100 = %d\n",oneh) ;
    }
    if(50 <= amount)
    {
      int fifty = amount/50 ;
      amount = amount%50 ;
      printf("50 = %d\n",fifty) ;
    }
    if(20 <= amount)
    {
       int twenty = amount/20 ;
       amount = amount%20 ;
       printf("20 = %d\n",twenty) ;
    }
    if(10 <= amount)
    {
      int ten = amount/10 ;
      amount = amount%10 ;
      printf("10 = %d\n",ten) ;
    }
    if(5 <= amount)
    {
      int five = amount/5;
      amount = amount%5 ;
      printf("5 = %d\n",five) ;
    }
    if(2 <= amount)
    {
        int two = amount/2 ;
        amount = amount%2 ;
        printf("2 = %d\n",two) ;
    }
    if(1 <= amount)
    {
       int one = amount/1 ;
       amount = amount%1 ;
       printf("1 = %d\n",one) ;
    }
    return 0;
}