//c program to find highest frequency element in array.
#include<stdio.h>
int main()
{
    int size,count=0,max;
    printf("Enter the size of the array ");
    scanf("%d",&size);
    int array[size], farray[size];
//inputing the elements in array.
    for(int i=0 ; i<size ; ++i)
    {
        printf("Enter the element at %d index = ",i);
        scanf("%d",&array[i]);
    }
//finding frequency of each element in array.   
    for(int outer=0 ; outer<size ; ++outer)
    {
        for(int inner=0 ; inner<size ; ++inner)
        {
            if(array[outer]==array[inner])
                count++;
        }
        farray[outer]=count;
        count=0;
    }
//printing maximum frequency element.
    max=farray[0];
    int temp = 0 ;
    for(int i=0 ; i<size ; ++i)
    {
        if(farray[i]>max)
        {
            max=farray[i];
            temp = i ;
        }
    }
    printf("%d is the highest frequency element and its frequency is %d\n",array[temp],max) ;
    return 0;
}