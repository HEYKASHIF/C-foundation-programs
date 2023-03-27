#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks between 1 to 10 = ");
    scanf("%d",&m);
    switch(m)
     {
         case 10:
           printf("grade is = A+");
           break;
         case 9:
           printf("grade is = A");
           break;
         case 8:
           printf("grade is = B");
           break;
         case 7:
           printf("grade is = C");
           break;
         case 6:
           printf("grade is = D");
           break;
         case 5:
           printf("grade is = E");
           break;
         default :
           printf("you are fail,sorry");
           break;
     }
     return 0;
}