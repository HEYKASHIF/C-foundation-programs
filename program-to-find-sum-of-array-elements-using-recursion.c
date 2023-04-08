// C program to find sum of array elements using recursion.
#include<stdio.h>
int Array_Sum(int arr[], int size, int sum)
{
    if(size<0)
    
        return sum;
    sum = sum+arr[size];
    Array_Sum(arr, size-1, sum);
}

int main()
{
    int size,sum=0;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    int array[size];
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter the %dth element ",i);
        scanf("%d",&array[i]);
    }
    sum = Array_Sum(array, size-1, sum);
    printf("Sum of the array is %d",sum);
    return 0;
    
}