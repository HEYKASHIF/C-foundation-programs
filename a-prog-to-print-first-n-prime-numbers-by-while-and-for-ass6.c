#include<stdio.h>
int main()
{
    int n,a=1,i,count=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    while(a<=n)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
             count++;
        }
        if(count==2)
         printf("\n%d",a);
        a++;
        count=0;
    }
    return 0;
}