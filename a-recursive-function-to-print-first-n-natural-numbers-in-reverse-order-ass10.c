#include<stdio.h>
void printRev(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printRev(n);
    return 0;
}

void printRev(int n)
{
    if(n)
    {
        printf("\n%d",n);
        printRev(n-1);
    }
}