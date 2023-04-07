

#include<stdio.h>
int main()
{
    int i,j,count=0;
    int size1 , size2;
    printf("Enter the size of array1 and array2 = ");
    scanf("%d%d",&size1, &size2);
    int arr1[size1], arr2[size2];
    
    for(i=0 ; i<size1 ; ++i)
    {
        printf("\nEnter the %dth element of array1 = ",i);
        scanf("%d",&arr1[i]);
        count++;
    }
    
    for(i=0 ; i<size2 ; ++i)
    {
        printf("\nEnter the %dth element of array2 = ",i);
        scanf("%d",&arr2[i]);
        count--;
    }
    
    if(count==0)
        printf("Both array1 & array2 are equal in size.");
    else
        printf("Both array1 & array2 are not equal in size.");
    
    return 0;
}