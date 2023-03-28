#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check whether its a leap-year or not leap-year = ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
         printf("year is leap year");
        if(year%400!=0)
         printf("year is not leap year");
    }
    if(year%100!=0)
    {
        if(year%4==0)
         printf("year is leap year");
        if(year%4!=0)
         printf("year is not leap year");
    }
    return 0;
}