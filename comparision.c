#include<stdio.h>
int main()
{
    int a,b ;
    printf("enter two numbers for comparision");
    scanf("%d%d" , &a,&b);
    if(a>b)
       printf("bigger number %d\n" , a);
    else
       printf("bigger number %d\n" , b);
       return 0;
       
}