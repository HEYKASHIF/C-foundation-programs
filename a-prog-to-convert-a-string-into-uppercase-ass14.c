#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter your name in small latter = ");
    gets(s);
    printf("\nIN UPPERCASE %s",strupr (s));
    return 0;
}
