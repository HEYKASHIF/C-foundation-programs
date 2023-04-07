#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char String[1000] ;
    scanf("%[^\n]%*c",String);
    
    for(int i=0 ; i<(strlen(String)) ; i++)
    {
        if (String[i] != ' ')
        {
            printf("%c", String[i]) ;
        }
        else 
        {
            printf("\n") ;
        }
    }
    return 0;
}