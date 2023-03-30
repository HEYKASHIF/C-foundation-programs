#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    printf("Enter the marks of 5 subjects out of 100 = ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    if(total<=250)
    {
        if(total>=165)
         printf("passed with 3rd division");
        else
         printf("sorry, failed");
    }
    else
    {
        if(total>=350)
         printf("passed with 1st division");
        else
         printf("passed with 2nd division");
    }
    return 0;
}