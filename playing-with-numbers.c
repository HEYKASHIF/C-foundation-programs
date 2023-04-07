#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char character ;
    char word[20] ;
    char sentence[100] ;
    scanf("%c",&character) ;
    printf("%c\n",character) ;
    scanf("%s",word) ;
    printf("%s\n",word) ;
    scanf("\n");
    scanf("%[^\n]%*c",sentence);
    printf("%s",sentence) ;
    
    
    return 0;
}