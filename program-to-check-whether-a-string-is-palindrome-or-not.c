//C program to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    char string_rev[100];
    printf("Enter a string = ");
    scanf("%s",string);
    int last=strlen(string)-1;

//reversing the string.
    for(int i=last ; i>=0 ; i--)
    {
        string_rev[last-i]=string[i];
    }
//comparing the string.
    int count=0;
    for(int i=0 ; i<strlen(string) ; i++)
    {
        if(string[i]==string_rev[i])
            continue;
        else
            count++;
    }
    
    if(count>0)
        printf("your string is not palindrome.");
    else
         printf("your string is palindrome.");
        
    return 0;
    
}