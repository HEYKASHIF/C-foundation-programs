#include<stdio.h>
float cir(float R);
int main()
{
    float r,p;
    printf("Enter the radius of a circle = ");
    scanf("%f",&r);
    p=cir(r);
    printf("circumference = %f",p);
    return 0;
}

float cir(float R)
{
    return(2*3.14*R);
}