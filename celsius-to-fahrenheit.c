#include<stdio.h>
int main ()
{
    float c;
    printf("enter today's temperature in celcius");
    scanf("%f" , &c);
    printf("today's temperature in fahrenhiet = %f" , ((1.8*c)+32) );
    return 0;
}