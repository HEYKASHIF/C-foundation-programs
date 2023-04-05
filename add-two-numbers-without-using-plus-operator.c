#include<stdio.h>
int main()
{
    int i, difference=0,range ,a ,b ;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    if(a>b)
    {
        difference=(a-b);
        range=a-difference;
        for(i=1 ; i<=range ; i++)
        {
            a++;
        }
        printf("%d",a);
        
    }
    else
    {
        difference=(b-a);
        range=b-difference;
        for(int i=1 ; i<=range ; i++)
        {
            b++;
        }
        printf("%d",b);
        
    }
    return 0;
}