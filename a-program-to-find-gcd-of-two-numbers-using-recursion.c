#include<stdio.h>
int GCD_RECURSION(int a, int b)
    {
        if(a>b)
        {
            int GCD=a;
            if(a%GCD==0 && b%GCD==0)
                printf("GCD is %d",GCD);
            else
                GCD_RECURSION(a-1,b-1);
            
        }
        else
        {
            int GCD=b;
            if(a%GCD==0 && b%GCD==0)
                printf("GCD is %d",GCD);
            else
                GCD_RECURSION(b-1,a-1);
        }
        
    }
    
    
int main()
{
    int F_number, S_number;
    printf("Enter two numbers = ");
    scanf("%d%d",&F_number,&S_number);
    GCD_RECURSION(F_number,S_number);
    return 0;
}