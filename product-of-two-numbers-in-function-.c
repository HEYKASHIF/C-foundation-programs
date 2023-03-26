#include <stdio.h>
int multiplyNum(int a, int b)
{
   int result=a*b;
   return result;
}

int main()
{
   int n1,n2,prod;
   printf("Enter the two number ");
   scanf("%d %d",&n1,&n2);
   prod=multiplyNum(n1,n2);
   printf("The product of these numbers :%d",prod);
   return 0;
}

