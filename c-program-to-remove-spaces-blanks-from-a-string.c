// C program to remove spaces, blanks from a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100];
    printf("enter a sentence = ");
    scanf("%[^\n]s",sen);
    for(int i=0 ; i<strlen(sen) ; i++)
    {
        if(sen[i]==' ')
        {
            if(sen[i]==sen[i+1])
            {
                continue;
            
            }
            else
            {
                printf("%c",sen[i]);
            }
            
        }
        else
        {
            printf("%c",sen[i]);
        }
        
    }
    return 0;
    
}