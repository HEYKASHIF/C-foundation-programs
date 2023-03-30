#include<stdio.h>
int main()
{
    int n;
    printf("Enter nth number to print first n number = ");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("\n%d",n);
        n--;
    }
    return 0;
}