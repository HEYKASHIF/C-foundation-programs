//C program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c ;
    printf("Enter the value of a: ") ;
    scanf("%d",&a) ;
    printf("Enter the vclue of b: ") ;
    scanf("%d",&b) ;
    printf("Enter the value of c: ") ;
    scanf("%d",&c) ;
    float root = ((b*b)-(4*a*c)) ;
    if(root>0)
    {
        printf("root 1 = %f\n",(-b+sqrt(root))/(2*a)) ;
        printf("root 2 = %f",(-b-sqrt(root))/(2*a)) ;
    }
    else 
    if(root==0)
    {
        printf("root 1 = %f\n",(-b)/(2*a)) ;
        printf("root 2 = %f",(-b)/(2*a)) ;
    }
    else 
    if(root<0)
    {
        printf("root 1 = %f\n",(-b+sqrt(-root))/(2*a)) ;
        printf("root 2 = %f",(-b-sqrt(-root))/(2*a)) ;
    }
    return 0;
}