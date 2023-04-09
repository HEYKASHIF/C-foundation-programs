// C program to check vowel or consonant using switch case.
#include <stdio.h>
int main()
{
    char character ;
    printf("Enter an Alphabet in lower case: ") ;
    scanf("%c",&character) ;
    switch(character)
    {
        case 'a' : 
            printf("Vowel") ;
            break ;
        case 'e' : 
            printf("Vowel") ;
            break ;
        case 'i' : 
            printf("Vowel") ;
            break ;
        case 'o' : 
            printf("Vowel") ;
            break ;
        case 'u' : 
            printf("Vowel") ;
            break ;
        default:
            printf("consonant") ;
    }
    return 0;
}