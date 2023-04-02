#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,n;
    printf("1. FOR, Check whether a given set of three numbers are lengths of an isoscales triangle or not.");
    printf("\n2. FOR, Check whether a given numbers are lengths of sides of a right angled triangle or not.");
    printf("\n3. FOR, Check whether a given set of three numbers are equilateral triangle or not.");
    printf("\n4. FOR, Exit");
    printf("\n\tPlease, Enter your choice from above options = ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
          printf("\nEnter the three sides to check whether these sides are of isoscales or not = ");
          scanf("%d%d%d",&a,&b,&c);
          if(a==b||b==c)
            printf("\nyes, isoscales");
          else if(a==c)
             printf("\nyes, isoscales");
          else
             printf("\nno, not a isoscales");
          break;
        case 2:
          printf("\nEnter the three sides to check whether these sides are of right angle triangle or not = ");
          scanf("%d%d%d",&a,&b,&c);
          if(a>b&&a>c)
            printf((a*a)==(b*b)+(c*c)?"\nyes, right angle triangle":"\nno, not a right angle triangle");  
          else if(b>a&&b>c)
            printf((b*b)==(a*a)+(c*c)?"\nyes, right angle triangle":"\nno, not a right angle triangle");
          else
            printf((c*c)==(a*a)+(b*b)?"\nyes, right angle triangle":"\nno, not a right angle triangle");
          break;
        case 3:
          printf("\nEnter the three sides to check whether these sides are of equilateral triangle or not = ");
          scanf("%d%d%d",&a,&b,&c);
          if(a==b&&a==c)
            printf("\nyes, equilateral");
          else
            printf("\nno, not a equilateral");
          break;
        case 4:
          exit(0);
        default:
          printf("\nSorry, Invalid input");
    }
    return 0;
}