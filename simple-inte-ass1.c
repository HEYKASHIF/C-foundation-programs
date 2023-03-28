#include<stdio.h>
int main()
{
    float a,r,t;
    printf("Enter the amount, rate and time = ");
    scanf("%f%f%f",&a,&r,&t);
    printf("this is your simple interest = %f",(a*r*t)/100);
    return 0;
    
    
}