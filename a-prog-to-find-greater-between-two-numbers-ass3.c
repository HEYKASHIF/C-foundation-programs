#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("greater number is %d",a);
    }
    if(b>a)
    {
        printf("greater number is %d",b);
    }
    return 0;
}