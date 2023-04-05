#include<stdio.h>
void reverse(int a[]);
int main()
{
    int a[10],i;
    printf("Enter 10 elements = ");
    for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
    reverse(a);
    return 0;
}
void reverse(int a[])
{
  int i,k;
  for(i=0;i<=4;i++)
  {
      k=a[i];
      a[i]=a[9-i];
      a[9-i]=k;
  }
  for(i=0;i<=9;i++)
   printf("\t%d",a[i]);
}