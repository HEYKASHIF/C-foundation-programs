#include<stdio.h>
int main()
{
    int a,b,c,d,e,T;
    printf("Enter obtained marks of 5 subjects out of 100 = ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    T=a+b+c+d+e;
    if(T>=400)
    {
        printf("passed with 1st division");
    }
    if(400>T>=300)
    {
        printf("passed with 2nd division");
    }
    if(300>T>=200)
    {
        printf("passed with 3rd division");
    }
    if(200>T>=165)
    {
        printf("only passed without any division");
    }
     if(T<165)
     {
         printf("fail");
     }
     return 0;
}