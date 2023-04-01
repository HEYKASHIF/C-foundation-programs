#include<stdio.h>
int square(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
      sum=sum+i*i;
    return sum;
}

int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    int s=square(n);
    printf("%d",s);
    return 0;
}
