#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n<=0)
     {
         if(n<0)
         printf("negative");
        else
         printf("zero");
     }
    else
     printf("positive");
    return 0;
}