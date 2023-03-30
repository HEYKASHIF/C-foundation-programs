#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a, b, and c of quadratic equation = ");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-(4*a*c)>=0)
    {
        if(b*b-(4*a*c)>0)
         printf("roots will be real");
        else
         printf("roots will be equal and real");
    }
    else
     printf("roots will not be real");
    return 0;
}