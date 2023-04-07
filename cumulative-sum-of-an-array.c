//The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i.
//Initial Array: [1, 2, 3, 4]
//Cumulative Sum: [1, 3, 6, 10]
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of element = ");
    scanf("%d",&n);
    int *ptr = malloc(n*sizeof(int));
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element = ",i);
        scanf("%d",&ptr[i]);
    }

//For printing the normal array.
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",ptr[i]);
    }
    
//Cumulative Operation.
    int *ptc = malloc(n*sizeof(int));
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            sum=sum+ptr[j];
        }
        ptc[i]=sum;
        sum=0;
    }
    printf("\n");

//For printing the array of cumulative sum.
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",ptc[i]);
    }
    
    return 0;
}