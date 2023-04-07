// C program to print all non repeating character in string.
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100] ; int count=0 ;
    printf("Enter a string : ") ;
    scanf("%s",string) ;
    
    for(int outer=0 ; outer<strlen(string) ; ++outer)
    {
       for(int inner=0 ; inner<strlen(string); ++inner)
       {
          if ( string[outer] == string[inner] )
              ++count ;     
          
       }
       if(count==1)
          printf("%c",string[outer]) ;
        count = 0 ;
    }
    return 0;
}