#include<stdio.h>
void printrev(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printrev(n);
    return 0;
}

void printrev(int n)
{
    if(n)
    {
        printf("%d",n%10);
        printrev(n/10);
    }
}