#include<stdio.h>
int main()
{
    int a=1,i,count=0;
    while(a<=100)
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
