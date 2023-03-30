#include<stdio.h>
int main()
{
    int a=0,b=1,n,fibo,i=1;
    printf("Enter nth number to print first n term of a fibonacci series = ");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    while(i<=(n-2))
    {
        fibo=a+b;
        printf("\n%d",fibo);
        a=b;
        b=fibo;
        i++;
    }
    return 0;
}