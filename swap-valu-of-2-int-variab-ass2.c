#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two values to swap it = ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    printf("a = %d and b = %d",a,b);
    return 0;
    
}