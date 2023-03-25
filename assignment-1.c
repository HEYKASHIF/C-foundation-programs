#include<stdio.h>
int main()
{
    float BS,HRA,TA,OTHERS,DA,PF,IT;
    float NS,twelve=12,fifteen=15,fourteen=14;
    printf("Enter your basic salary : = ");
    scanf("%f",&BS);
    printf("Enter your HRA amount : = ");
    scanf("%f",&HRA);
    printf("Enter your TA amount : = ");
    scanf("%f",&TA);
    printf("Enter your OTHERS amount : = ");
    scanf("%f",&OTHERS);
    DA=BS*(twelve/100);
    PF=BS*(fourteen/100);
    IT=BS*(fifteen/100);
    NS=BS+DA+HRA+TA+OTHERS-(PF+IT);
    printf("this is your Net salary = %f",NS);
    