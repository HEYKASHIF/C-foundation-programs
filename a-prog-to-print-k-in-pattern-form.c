#include<stdio.h>
int main()
{
    int breadth ;
    scanf("%d",&breadth);
    int k = 1;
    int length = (breadth*2)-1;
    int a= breadth;
    for(int i = 1; i<=length; i++)
    {
        for(int j = 1; j<=breadth; j++)
        {
            if(j==1||j==a)
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n") ;
            if(k<breadth)
            {
                k++;
                a--;
            }
            else if(a<=breadth)
            {
                a++;
            }
            
            
    }
    return 0 ;
}