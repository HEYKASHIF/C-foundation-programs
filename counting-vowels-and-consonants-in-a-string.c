#include<stdio.h>
#include<string.h>
int main()
{
    int count1=0, count2=0;
    char name[20];
    printf("Enter your name buddy in lowercase = ");
    scanf("%s",name);
    for(int i=1; i<=strlen(name); i++)
    {
        if((name[i] == 'a') || (name[i] == 'e') || (name[i] == 'i') || (name[i] == 'o') || (name[i] == 'u'))
            ++count1;
        else
            ++count2;
    }
    printf("\nNUMBER OF VOWELS %d",count1);
    printf("\nNUMBER OF CONSONANTS %d",count2);
    
    
    return 0;
}