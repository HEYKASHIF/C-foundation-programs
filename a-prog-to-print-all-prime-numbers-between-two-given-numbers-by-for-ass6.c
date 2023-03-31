#include<stdio.h>
int main()
{
    int n,a,i,count=0;
    printf("Enter starting number = ");
    scanf("%d",&a);
    printf("Enter ending number = ");
    scanf("%d",&n);
    for(;a<=n;a++)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
             count++;
        }
        if(count==2)
         printf("\n%d",a);
        count=0;
    }
    return 0;
}