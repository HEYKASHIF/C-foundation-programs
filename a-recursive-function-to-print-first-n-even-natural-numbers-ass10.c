#include<stdio.h>
void printeven(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printeven(n);
    return 0;
}

void printeven(int n)
{
    if(n)
    {
        printeven(n-1);
        printf("\n%d",2*n);
    }
}