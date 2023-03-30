#include<stdio.h>
int main()
{
    int a,b,c,d,e,T;
    printf("enter the marks of 5 subjects out of 100 = ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    T=a+b+c+d+e;
    printf(T<250?T>=165?"passed without any division":"sorry, fail":T>350?"passed with 1st division":"passed with 2nd division");
    return 0;
}    
    