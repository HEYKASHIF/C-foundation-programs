#include<stdio.h>
int findsmallindex(int a[]);
int main()
{
    int a[10],i,index;
    printf("Enter 10 elements = ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    index=findsmallindex(a);
    printf("smallest element's index = %d",index);
    return 0;
}

int findsmallindex(int a[])
{
    int i,s;
    s=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]<s)
            s=a[i];
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]==s)
            return i;
    }
}
