#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter your name in capital latter = ");
    gets(s);
    printf("\nin lowercase %s",strlwr (s));
    return 0;
}
