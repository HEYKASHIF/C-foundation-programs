//C program to sort an array using pointers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    printf("Enter the size of the array = ");
    scanf("%d",&size);
    int *ptr = malloc(size*sizeof(int));
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter the %dth element of the array = ",i);
        scanf("%d",&ptr[i]);
    }
    
    for(int round=0 ; round<size-1 ; round++)
    {
        for(int bubb=0 ; bubb<=(round-1) ; bubb++)
        {
            if(ptr[bubb]>ptr[bubb+1])
            {
                int temp = ptr[bubb+1];
                ptr[bubb+1] = ptr[bubb];
                ptr[bubb] = ptr[bubb+1];
                
            }
        }
    }
    
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",ptr[i]);
    }
    
    return 0;
    
}