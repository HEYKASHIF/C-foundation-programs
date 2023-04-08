//C program to copy one array to another using pointers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    int *ptr = malloc(size*sizeof(int));
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter the %dth element = ",i);
        scanf("%d",&ptr[i]);
    }

    
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        arr[i]=ptr[i];
    }
    free(ptr);
    
    
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}