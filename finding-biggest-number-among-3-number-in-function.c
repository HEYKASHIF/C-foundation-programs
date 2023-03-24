
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d" , &a,&b,&c);
    if(a>b)
     {
         if(a>c)
          printf("bigger %d" , a);
         else
          printf("bigger %d" , c);
     }
    else
     {
         if(b>c)
          printf("bigger %d" , b);
         else
          printf("bigger %d" , c);
     }
    return 0;
}