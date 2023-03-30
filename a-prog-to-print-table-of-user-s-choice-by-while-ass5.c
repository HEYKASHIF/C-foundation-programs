#include<stdio.h>
int main()
{
    int n,ans,i=1;
    printf("Enter a number to  print the table of that number = ");
    scanf("%d",&n);
    ans=n;
    while(i<=10)
    {
        printf("\n%d * %d = %d",n,i,ans);
        i++;
        ans=n*i;
    }
    return 0;
}