#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter your city name = ");
    gets(s);
    printf("%d",strlen(s));
    return 0;
}