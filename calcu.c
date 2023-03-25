#include<stdio.h>
int main()
{
    float num1,num2,result;
    char op;
    printf("enter first number");
    scanf("%f",&num1);
    
    printf("enter operator");
    scanf(" %c",&op);
    
    printf("enter second number");
    scanf("%f",&num2);
     switch(op)
       {
           case '/':
           result = num1/num2;
           printf("%f",result);
           break;
           
           case '*':
           result = num1*num2;
           printf("%f",result);
           break;
           
           case '+':
           result = num1+num2;
           printf("%f",result);
           break;
           
           case '-':
           result = num1-num2;
           printf("%f",result);
           break;
           
           default :
           printf("your operator is invalid");
         
       }
    
    return 0;
    }