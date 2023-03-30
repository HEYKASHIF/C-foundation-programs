#include<stdio.h>
int main()
{
    int i=1,n,odd=1;
    printf("Enter nth number to print first n odd natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",odd);
        odd+=2;
        i++;
    }
    return 0;
}