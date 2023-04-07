#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[100],ch='a';
    printf("Enter a string = ");
    scanf("%s",name);
    
    for (int i=0; i<strlen(name); i++)
    {
        if(name[i]==ch)
        {
            for(int j=i; j<strlen(name); j++)
            {
                name[j]=name[j+1];
            }
        }
    }
    printf("%s",name);
    return 0;
}