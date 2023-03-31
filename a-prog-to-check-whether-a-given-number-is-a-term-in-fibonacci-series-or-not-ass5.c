#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c=0;
    printf("Enter a number to check whether its number is a fibonacci number or not = ");
    scanf("%d",&n);
    while(c<=n)
    {
        c=a+b;
        if(c==n)
         break;
        a=b;
        b=c;
    }
    if(c==n)
     printf("Yes, this is");
    else
     printf("No, this is not");
    return 0;
}