#include<stdio.h>
int main()
{
    int n,i,j;
    int count=0;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr1[n], arr2[n];
// inputing first array.
    for(i=0 ; i<n ; ++i)
    {
        printf("Enter the %dth element of first array = ",i);
        scanf("%d",&arr1[i]);
    }
// inputing second array.    
    for(i=0 ; i<n ; ++i)
    {
        printf("Enter the %dth element of second array = ",i);
        scanf("%d",&arr2[i]);
    }
// printing first array.   
    for(i=0 ; i<n ; ++i)
    {
        printf("%d\t",arr1[i]);
    }
// printing second array.
    printf("\n") ;
    for(i=0 ; i<n ; ++i)
    {
        printf("%d\t",arr2[i]);
    }
// checking process.
    for(int outer=0 ; outer<n ; outer++)
    {
        for(int inner=0 ; inner<n ; inner++)
        {
            if(arr1[outer]==arr2[inner])
            {
               count++; 
              // printf("%d",count);
            }
        }
        // printf("%d",count) ;
        if(count==0)
        {
            printf("\n%d is not in array2.",arr1[outer]);
        }
        else
        {
            count=0;
            continue;
        }
    }
    
    return 0;
}