// C program to convert lowercase char to uppercase of string.
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100] ;        
    printf("Enter a string: ") ;
    scanf("%s",string) ;
    
    for(int i=0 ; i< strlen(string) ; i++)
    {
        if(((int)string[i] >= 97) && ((int)string[i] <= 122))
        {
            string[i] = (char)((int)string[i]-32) ;
        }
    }
    printf("%s",string) ;

    return 0;
}