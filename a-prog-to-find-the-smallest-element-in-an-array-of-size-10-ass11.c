#include<stdio.h>
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers = ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    
    s=a[0];
    
    for(i=0;i<=9;i++)
    {
        if(a[i]<s)
          s=a[i];
    }
    
    printf("smallest element is %d ",s);
    return 0;
}