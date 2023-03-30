#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    printf(a>b?"a is greater":"b is greater");
    return 0;
}