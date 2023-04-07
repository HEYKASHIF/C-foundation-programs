#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    char temp;
    printf("Enter any string buddy = ");
    scanf("%s",string);
    for(int i=0 ; i<=(strlen(string)-2) ; i++)
    {
        temp = string[i];
        if( ((int)string[i+1]) < ((int)temp) )
        {
            
            string[i] = string[i+1];
            string[i+1] = temp;
        }
    }
    printf("%s",string);
    return 0;
}