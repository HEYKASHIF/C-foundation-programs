#include<stdio.h>
int sumn(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("sum = %d",sumn(n));
    return 0;
}

int sumn(int n)
{
    if(n)
      return(n)+sumn(n-1);
}