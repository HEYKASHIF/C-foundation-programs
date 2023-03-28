#include<stdio.h>
int main()
{
    int a,b,c,determinent;
    printf("Enter the value of a, b and c of quadratic equation = ");
    scanf("%d%d%d",&a,&b,&c);
    determinent=((b*b)-(4*a*c));
    if(determinent>0)
      printf("roots are real");
    if(determinent==0)
      printf("roots are equal and real");
    if(determinent<0)
      printf("roots are not real");
    return 0;
}