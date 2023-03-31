#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("prime factors of %d = ",n);
    for(j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            for(i=1;i<=j;i++)
            {
               if(j%i==0)
                 count++;
            }
            if(count==2)
              printf("%d\t",j);
            count=0;
        }
    }
    
    return 0;
}