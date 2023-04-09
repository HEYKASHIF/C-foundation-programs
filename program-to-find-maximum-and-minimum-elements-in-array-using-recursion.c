// C program to find maximum and minimum elements in array using recursion.
#include<stdio.h>
int max(int arr[], int size, int maximum)
{
    if(size>-1)
    {
        if(maximum<arr[size])
        {
            maximum=arr[size];
            max(arr, --size, maximum);
        }
    }
    else
        return maximum;
}

int main()
{
    int size, maximum=0;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    int arr[size-1];
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter the %dth value of array = ",i);
        scanf("%d",&arr[i]);
    }
    maximum = max(arr, size, maximum);
    printf("\nmaximum value of array is %d",maximum);
    return 0;
}