#include<stdio.h>
void sort(int a[],int size);
int main()
{
    int a[30],i,size;
    printf("please, Enter the limit of the element = ");
    scanf("%d",&size);
    printf("Enter %d elements = ",size);
    for(i=0;i<=size-1;i++)
     scanf("%d",&a[i]);
    sort(a,size);
    return 0;
}
void sort(int a[],int size)
{
    int i,j,k;
    for(j=1;j<=size-1;j++)
    {
        for(i=0;i<=size-1-j;i++)
        {
            if(a[i]>a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
    printf("\n");
    for(i=0;i<=size-1;i++)
     printf("\t%d",a[i]);
     
}