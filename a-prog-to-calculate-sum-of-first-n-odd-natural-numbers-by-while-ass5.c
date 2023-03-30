#include<stdio.h>
int main()
{
    int i=1,n,odd=1,sum=0;
    printf("Enter nth number to calculate sum of first n odd natural numbers =");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+odd;
        printf("\n%d",odd);
        odd+=2;
        i++;
    }
    
    printf("\nSum of first %d odd natural numbers = %d",n,sum);
    return 0;
}