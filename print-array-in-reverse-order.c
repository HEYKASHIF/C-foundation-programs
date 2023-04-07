//C program to print array in reverse Order.
#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    int array[size];
//Entering the element in the array.    
    for(i=0 ; i<size ; ++i)
    {
        printf("Enter the %dth element of the array = ",i);
        scanf("%d",&array[i]);
    }
//printing the array in reverse Order.   
    for(i=size-1 ; i>=0 ; --i)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}