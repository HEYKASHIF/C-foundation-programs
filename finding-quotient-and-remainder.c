#include<stdio.h>
int main()
{
    int x, y ;
    printf("enter two numbers for quotient and remainder");
    scanf("%d%d" , &x , &y );

    if(y)
     {printf("this is your quotient = %d" ,x/y);
     printf("this is your remainder = %d" ,x%y);}
    else
    printf("your input is invalid");
    return 0;
    
}
