// C program to print elements of array using recursion.
#include <stdio.h>
void print_element(int array[],int size,int temp)
{
    if(temp<size)
    {
        printf("%d\n",array[temp]) ;
        print_element(array,size,temp+1) ;
    }
}
int main()
{
    int size,temp=0;
    printf("Enter the size = ") ;
    scanf("%d",&size) ;
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter %dth element = ",i) ;
        scanf("%d",&array[i]) ;
    }
    print_element(array,size,temp) ;
    
    return 0;
}