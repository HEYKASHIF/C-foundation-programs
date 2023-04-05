#include<stdio.h>
void printodd(int n);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printodd(n);
    return 0;
}

void printodd(int n)
{
    if(n)
    {
        printf("\n%d",2*n-1);
        printodd(n-1);
        
    }
}