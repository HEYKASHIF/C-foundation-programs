#include<stdio.h>
int add(int a, int b);
int main()
{
    int a,b,s;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    s=add(a,b);
    printf("sum = %d",s);
    return 0;
}

int add(int a, int b)
{
    return(a+b);
}