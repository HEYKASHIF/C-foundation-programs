#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c of quadratic equation = ");
    scanf("%d%d%d",&a,&b,&c);
    printf(b*b-(4*a*c)>=0?b*b-(4*a*c)>0?"roots will be real":"roots will be equal and real":"roots will not be real");
    return 0;
}