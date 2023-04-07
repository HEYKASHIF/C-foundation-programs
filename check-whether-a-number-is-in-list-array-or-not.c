#include<stdio.h>
int main()
{
    int n,check,COUNT = 0;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    int arr[n];



// FOR ENTERING THE ELEMENTS IN ARRAY..............................................................................................      
    for(int i=0; i<n; i++)
    {
        printf("\nEnter %dth element = ",i);
        scanf("%d",&arr[i]);
    }



// FOR CHECKING THE ELEMENTS IN ARRAY..............................................................................................
    printf("\nEnter anyone element to check whether it is in the list or not = ");
    scanf("%d",&check);
    for(int j=0; j<n; j++)
    {
        if(arr[j]==check)
        {
            printf("\n%d is in the list.",check);
            break;
        }
        else
        {
            
            COUNT +=1 ;
        }
    }
    if(COUNT==n)
    {
        printf("\n%d is not in the list",check) ;
    }
    return 0;
    
}