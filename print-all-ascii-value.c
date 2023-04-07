#include<stdio.h>
#include<string.h>
int main()
{
    char n;
    for(int i=0;i<=127;i++)
    {
        n=(char)i;
        printf("\n%d  %c",i,n);
    }
    return 0;
}