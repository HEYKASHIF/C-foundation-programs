#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100] , string2[100] ; 
    int count=0 ;
    scanf("%s%s", string1 , string2) ;
    
    if(strlen(string1) == strlen(string2))
    {
        for(int outer = 0 ; outer<(strlen(string1)) ; outer++) 
        {
            for(int inner = 0 ; inner<(strlen(string2)) ; inner++)
            {
                if(string1[outer] == string2[inner])
                {
                    count ++ ;
                    break ;
                } 
                else
                    continue ;
            }              
        }
        if(count == (strlen(string1)))
            printf("\n%s %s are anagram", string1 , string2) ;
        else
            printf("\n%s %s are not anagram", string1 , string2) ;
    }
    else
    {
        printf("\n%s %s are not anagram", string1 , string2) ;
    }
    

    return 0;
}