#include<stdio.h>
int cube(int number)
{
    return number*number*number;
}




int main()
{
    int number;
    printf("Enter a number to get the cube of that number = ");
    scanf("%d",&number);
    printf("cube of %d is %d",number,cube(number));
    return 0;
}