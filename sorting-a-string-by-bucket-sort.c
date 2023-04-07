#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int count1=0;
    int count2=0;
    int count3=0;
    printf("Enter a long string(combination of abc) beta jii = ");
    scanf("%s",string);
    //bucket sort hai dost!
    for(int i=0 ; i<strlen(string) ; i++)
    {
        if(string[i] == 'a')
            ++count1;
        else if(string[i] == 'b')
            ++count2;
        else if(string[i] == 'c')
            ++count3;
    }
    printf("a = %d\n b = %d\n c = %d", count1 , count2 , count3);
    return 0;
}