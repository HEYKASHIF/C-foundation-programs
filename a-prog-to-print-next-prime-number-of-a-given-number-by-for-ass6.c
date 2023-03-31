#include<stdio.h>
int main()
{
    int n,a,i,count=0;
    printf("Enter number to print next prime number of it's number = ");
    scanf("%d",&a);
    for(a+=1;a>0;a++)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
             count++;
        }
        if(count==2)
        {
            printf("\n%d",a);
            break;
        }
        count=0;
    }
    return 0;
}
