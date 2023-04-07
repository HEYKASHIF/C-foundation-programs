#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch ;
    char string[50] ;
    char s1[100] ;
    scanf("%c",&ch) ;
    scanf("%s",string) ;
    scanf("%[^\n]%*c",s1);
    
    printf("%c\n",ch) ;
    printf("%s\n",string) ;
    printf("%s",s1) ;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}