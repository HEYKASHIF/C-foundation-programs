#include<stdio.h>
int main()
{
    int a,b,L;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    for(L=1;L<=a*b;L++)
    {
        if(L%a==0&&L%b==0)
        {
            printf("LCM = %d",L);
            break;
        }
        
    }
    return 0;
}