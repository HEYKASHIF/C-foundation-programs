#include<stdio.h>
void frequency(int a[]);
int main()
{
    int a[10],i;
    printf("Enter 10 elements = ");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    frequency(a);
    return 0;
}
void frequency(int a[])
{
    int i,j,f,count=0;
    for(j=0;j<=9;j++)
    {
        f=a[j];
        for(i=0;i<=9;i++)
        {
            if(a[i]==f)
                count++;
        }
        printf("\nfrequency of %dth index = %d",j,count);
        count=0;
    }
}
