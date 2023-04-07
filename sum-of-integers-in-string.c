#include<stdio.h>
#include<string.h>
int main()
{
    char number[100];
    int sum = 0 ;
    int temp = 0;
    int zero = 48;
    printf("Enter a number = ");
    scanf("%s",number);
    for(int i=0 ; i<strlen(number) ; i++)
    {
        temp = (int)number[i] - zero;
        sum=sum+temp;
    }
    printf("sum of the digits of %s is %d.",number,sum);
    return 0;
}