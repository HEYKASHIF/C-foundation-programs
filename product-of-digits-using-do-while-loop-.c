#include <stdio.h>
int main()
{ 
   int n,prod=1,rem;
   printf("enter a number");
   scanf("%d",&n);
   do{
      rem=n%10;
      prod=prod*rem;
      n=n/10;
    } while(n>0);
    
    printf("product of your numbers = %d\n",prod);
    return 0;
}

