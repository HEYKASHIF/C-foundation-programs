#include<stdio.h>
int sumofnnumbers(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
      sum=sum+i;
    return sum;
    
}

int main()
{
    int a;
    printf("ENter a number = ");
    scanf("%d",&a);
    int s=sumofnnumbers(a);
    printf("%d",s);
    return 0;
}