//Program to concatenate two strings using pointer.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char string1[50];
    char string2[50];
    char *final_string = malloc(100*sizeof(char));
    

    printf("Enter a first string = ");
    scanf("%s",string1);
    printf("Enter second string = ");
    scanf("%s",string2);
    
    int half=50;
    for(int i=0 ; i<strlen(string1)*2 ; i++)
    {
        if(i<strlen(string1))
            final_string[i]=string1[i];
        else
            final_string[i]=string2[i-half];
    }
    
    for(int i=0 ; i<100; i++)
    {
        printf("%c",final_string[i]);
    }
    
    return 0;
    
}