#include<stdio.h>
void rotate(int a[]);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers = ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    rotate(a);
    return 0;
}
void rotate(int a[])
{
    int k,i;
    k=a[9];
    for(i=9;i>=1;i--)
        a[i]=a[i-1];
    a[0]=k;
    for(i=0;i<=9;i++)
        printf("\t%d",a[i]);

}
