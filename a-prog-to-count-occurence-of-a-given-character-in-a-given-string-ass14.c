#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],a;
    int count=0,i;
    printf("Enter a string = ");
    gets(s);
    printf("Enter a character = ");
    scanf("%c",&a);
    for(i=0;s[i];i++)
    {
        if(s[i]==a)
          count++;
    }
    printf("%d",count);
    return 0;
}
