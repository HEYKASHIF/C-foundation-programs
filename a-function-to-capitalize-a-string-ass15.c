#include<stdio.h>
#include<string.h>
void capitalize(int a[]);
int main()
{
    char a[20];
    printf("Enter your full name = ");
    gets(a);
    capitalize(a);
    return 0;
}

void capitalize(int a[])
{
    printf("your name in capital form = %s",strupr(a));
}