#include<stdio.h>


double sqrt(double number)
{
    double error = 0.00001; //define the precision of your result
    double s = number;

    while ((s - number / s) > error) //loop until precision satisfied 
    {
        s = (s + number / s) / 2;
    }
    return s;
}

int main()
{
    float number ;
    printf("Enter a number = ");
    scanf("%f",&number);
    printf("square root of %f is %.2f", number , sqrt(number));
    return 0;
}