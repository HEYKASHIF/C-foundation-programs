#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the Number of elements: ") ;
    scanf("%d",&n) ;
    int Array[n] ;
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter %dth element: ",i) ;
        scanf("%d",&Array[i]) ;
    }
    int twin=0 ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i ; j<n ; j++)
        {
            if(i != j)
            {
                if(Array[i] == Array[j])
                    twin++ ;
            }
        }
    }
    printf("%d",twin) ;
    return 0 ;
}