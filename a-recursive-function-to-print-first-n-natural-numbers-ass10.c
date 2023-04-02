#include<stdio.h>
void printN(int n);
int main()
{
    int n;
    printf("Enter a number to first n natural numbers = ");
    scanf("%d",&n);
    printN(n);
    return 0;
    
}

void printN(int n)
{
    if(n)
    {
        printN(n-1);
        printf("\n%d",n);
    }
   
}