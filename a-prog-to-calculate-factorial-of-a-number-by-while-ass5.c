#include<stdio.h>
int main()
{
    int facto=1,n;
    printf("Enter a number to calculate factorial of that number = ");
    scanf("%d",&n);
    int nu=n;
    while(n>=1)
    {
        facto=facto*n;
        printf("%d*",n);
        n--;
    }
    printf("\nfactorial of %d is %d",nu,facto);
    return 0;
    
}