#include<stdio.h>
int main()
{ 
    int len,L,R;
    scanf("%d",&len);
    if(len%2==0)
    {
        len+=1 ;
    }
   int breadth = (len*2)-1;
   L = len;
   R = len;
   
   for(int i = 1 ; i<=len; i++)
   {
       for(int j = 1 ; j<=breadth; j++)
       {
           if(j==L&&j==R)
           {
               printf("*");
               
            }
            else if(j==L||j==R)
            {
               printf("*") ;
            //   L-=1;
            //   R+=1;
            }
           else
          {
              if((len/2)+1==i && j>L && j<R)
              printf("*");
              else
               printf(" ");
           }
       }
               L-=1;
               R+=1;
       printf("\n") ;
   }
     return 0 ;
}