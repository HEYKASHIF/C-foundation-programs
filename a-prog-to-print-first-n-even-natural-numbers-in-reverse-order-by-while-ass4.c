#include<stdio.h>
int main()
{
    int n;
    printf("Enter nth number to print first n even natural numbers in reverse order = ");
    scanf("%d",&n);
    n=((n*2)-2);
    while(n>=0)
    {
        printf("\n%d",n);
        n-=2;
    }
    return 0;
}
