#include<stdio.h>
int main()
{
    int n,sum=0;
    do{
        printf("Enter the number = ");
        scanf("%d",&n);
        sum+=n;
        }while(n!=0);
    printf("Sum of Numbers = %d\n",sum);
    return 0;
}