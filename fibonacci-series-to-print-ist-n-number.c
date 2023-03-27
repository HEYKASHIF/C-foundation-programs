#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter a number to print the values = ");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}