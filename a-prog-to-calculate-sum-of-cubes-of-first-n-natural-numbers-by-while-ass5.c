#include<stdio.h>
int main()
{
    int i=1,n,cube,sum=0;
    printf("Enter nth number to calculate the sum of cubes of first n natural numbers = ");
    scanf("%d",&n);
    while(i<=n)
    {
        cube=i*i*i;
        sum=sum+cube;
        i++;
    }
    
    printf("sum of cubes of first n natural numbers = %d",sum);
    return 0;
}