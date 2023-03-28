#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year = ");
    scanf("%d",&year);
    printf(year%100?year%4?"not leap year":"leap year":year%400?"not leap year":"leap year");
    return 0;
}