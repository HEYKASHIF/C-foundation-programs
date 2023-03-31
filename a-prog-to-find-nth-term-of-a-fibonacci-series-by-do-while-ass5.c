#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0,nf;
    printf("Enter the value of n to find the nth term of fibonacci series = ");
    scanf("%d",&n);
    if(n<=2)
    {
        if(n==1)
          printf("1st term of fibonacci series = %d",a);
        else
          printf("2nd term of fibonacci series = %d",b);
    }
    else
    {
         nf=n;
         n-=2;
         do
         {
            c=a+b;
            a=b;
            b=c;
            n--;
         }while(n);
         printf("%d term of fibonacci series = %d",nf,c);
    }
   
    return 0;
}