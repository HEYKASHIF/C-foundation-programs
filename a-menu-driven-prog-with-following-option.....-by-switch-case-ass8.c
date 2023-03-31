#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b;
    printf("1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nEnter your choice from given above = ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
          printf("\nEnter two numbers for Addition = ");
          scanf("%d%d",&a,&b);
          printf("\nAddition = %d",a+b);
          break;
        case 2:
          printf("\nEnter two numbers for Substraction = ");
          scanf("%d%d",&a,&b);
          printf("\nAddition = %d",a-b);
          break;
        case 3:
          printf("\nEnter two numbers for Multiplication = ");
          scanf("%d%d",&a,&b);
          printf("\nAddition = %d",a*b);
          break;
        case 4:
          printf("\nEnter two numbers for Division = ");
          scanf("%d%d",&a,&b);
          printf("\nAddition = %d",a/b);
          break;
        case 5:
          exit(0);
        default:
          printf("\nInvalid choice");
    }
    
    return 0;
}






