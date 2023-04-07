#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter multiple string seprated by space = ");
    fgets(string,99,stdin);
    printf("string before replacing space --> %s", string);
    for(int i=0 ; i<strlen(string) ; i++)
    {
        if(string[i] == ' ')
            string[i] = '&';
    }
    printf("string after replacing space --> %s", string);
    return 0;
}