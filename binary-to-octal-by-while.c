#include<stdio.h>
int main()
{
    int number,octal=0,place=1,remain;
    printf("Enter a number to gets its octal = ");
    scanf("%d",&number);
    while(number)
    {
        remain=number%8;
        octal=octal+remain*place;
        number=number/8;
        place*=10;
    }
    printf("%d",octal);
    return 0;
}