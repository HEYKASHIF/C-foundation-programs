#include<stdio.h>
int main()
{
    int m1[3][3],m2[3][3],i,j;
    printf("Enter the elements of m1 matrix = ");
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       scanf("%d",&m1[i][j]);
       
    printf("Enter the elements of m2 matrix = ");
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      scanf("%d",&m2[i][j]);
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         printf("%d ",m1[i][j]+m2[i][j]);
        printf("\n");
    }
    return 0;
}