#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter nth number to print first n number = ");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}