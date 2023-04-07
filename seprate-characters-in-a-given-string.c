//program to seprate characters in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your enemy name buddy = ");
    scanf("%s",name);
    for(int i = 0; i<=strlen(name); i++)
    {
        printf("\n%c",name[i]);
    }
    return 0;
    
}