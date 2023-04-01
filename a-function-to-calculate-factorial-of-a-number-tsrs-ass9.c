#include<stdio.h>
int fact(int n)
{
    int facto=1;
    for(;n>=1;n--)
     facto=facto*n;
    return facto;
}


int main()
{
    int n;
    printf("Enter a number =");
    scanf("%d",&n);
    int F=fact(n);
    printf("%d",F);
    return 0;
}