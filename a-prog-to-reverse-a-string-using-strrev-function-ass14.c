#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],a;
    int count=0,i;
    printf("Enter a string = ");
    gets(s);
    printf("\n in reverse form %s",strrev(s));
    return 0;
}
